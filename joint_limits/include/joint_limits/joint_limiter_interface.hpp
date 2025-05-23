// Copyright (c) 2024, Stogl Robotics Consulting UG (haftungsbeschränkt)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/// \author Denis Stogl

#ifndef JOINT_LIMITS__JOINT_LIMITER_INTERFACE_HPP_
#define JOINT_LIMITS__JOINT_LIMITER_INTERFACE_HPP_

#include <string>
#include <vector>

#include "joint_limits/joint_limits.hpp"
#include "joint_limits/joint_limits_rosparam.hpp"
#include "rclcpp/node.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "realtime_tools/realtime_buffer.hpp"
#include "trajectory_msgs/msg/joint_trajectory_point.hpp"

namespace joint_limits
{

template <typename JointLimitsStateDataType>
class JointLimiterInterface
{
public:
  JointLimiterInterface() = default;

  virtual ~JointLimiterInterface() = default;

  /// Initialization of every JointLimiter.
  /**
   * Initialization of JointLimiter for defined joints with their names.
   * Robot description topic provides a topic name where URDF of the robot can be found.
   * This is needed to use joint limits from URDF (not implemented yet!).
   * Override this method only if initialization and reading joint limits should be adapted.
   * Otherwise, initialize your custom limiter in `on_limit` method.
   *
   * \param[in] joint_names names of joints where limits should be applied.
   * \param[in] param_itf node parameters interface object to access parameters.
   * \param[in] logging_itf node logging interface to log if error happens.
   * \param[in] robot_description_topic string of a topic where robot description is accessible.
   */
  virtual bool init(
    const std::vector<std::string> & joint_names,
    const rclcpp::node_interfaces::NodeParametersInterface::SharedPtr & param_itf,
    const rclcpp::node_interfaces::NodeLoggingInterface::SharedPtr & logging_itf,
    const std::string & robot_description_topic = "/robot_description")
  {
    number_of_joints_ = joint_names.size();
    joint_names_ = joint_names;
    joint_limits_.resize(number_of_joints_);
    node_param_itf_ = param_itf;
    node_logging_itf_ = logging_itf;

    bool result = true;

    // TODO(destogl): get limits from URDF

    // Initialize and get joint limits from parameter server
    if (has_parameter_interface())
    {
      for (size_t i = 0; i < number_of_joints_; ++i)
      {
        if (!declare_parameters(joint_names[i], node_param_itf_, node_logging_itf_))
        {
          RCLCPP_ERROR(
            node_logging_itf_->get_logger(),
            "JointLimiter: Joint '%s': parameter declaration has failed", joint_names[i].c_str());
          result = false;
          break;
        }
        if (!get_joint_limits(joint_names[i], node_param_itf_, node_logging_itf_, joint_limits_[i]))
        {
          RCLCPP_ERROR(
            node_logging_itf_->get_logger(),
            "JointLimiter: Joint '%s': getting parameters has failed", joint_names[i].c_str());
          result = false;
          break;
        }
        RCLCPP_INFO(
          node_logging_itf_->get_logger(), "Limits for joint %zu (%s) are:\n%s", i,
          joint_names[i].c_str(), joint_limits_[i].to_string().c_str());
      }
      updated_limits_.writeFromNonRT(joint_limits_);

      auto on_parameter_event_callback = [this](const std::vector<rclcpp::Parameter> & parameters)
      {
        rcl_interfaces::msg::SetParametersResult set_parameters_result;
        set_parameters_result.successful = true;

        std::vector<joint_limits::JointLimits> updated_joint_limits = joint_limits_;
        bool changed = false;

        for (size_t i = 0; i < number_of_joints_; ++i)
        {
          changed |= joint_limits::check_for_limits_update(
            joint_names_[i], parameters, node_logging_itf_, updated_joint_limits[i]);
        }

        if (changed)
        {
          updated_limits_.writeFromNonRT(updated_joint_limits);
          RCLCPP_INFO(node_logging_itf_->get_logger(), "Limits are dynamically updated!");
        }

        return set_parameters_result;
      };

      parameter_callback_ =
        node_param_itf_->add_on_set_parameters_callback(on_parameter_event_callback);
    }

    if (result)
    {
      result = on_init();
    }

    (void)robot_description_topic;  // avoid linters output

    return result;
  }

  /**
   * Wrapper init method that accepts the joint names and their limits directly
   */
  virtual bool init(
    const std::vector<std::string> & joint_names,
    const std::vector<joint_limits::JointLimits> & joint_limits,
    const std::vector<joint_limits::SoftJointLimits> & soft_joint_limits,
    const rclcpp::node_interfaces::NodeParametersInterface::SharedPtr & param_itf,
    const rclcpp::node_interfaces::NodeLoggingInterface::SharedPtr & logging_itf)
  {
    number_of_joints_ = joint_names.size();
    joint_names_ = joint_names;
    joint_limits_ = joint_limits;
    soft_joint_limits_ = soft_joint_limits;
    node_param_itf_ = param_itf;
    node_logging_itf_ = logging_itf;
    updated_limits_.writeFromNonRT(joint_limits_);

    if ((number_of_joints_ != joint_limits_.size()) && has_logging_interface())
    {
      RCLCPP_ERROR(
        node_logging_itf_->get_logger(),
        "JointLimiter: Number of joint names and limits do not match: %zu != %zu",
        number_of_joints_, joint_limits_.size());
    }
    return (number_of_joints_ == joint_limits_.size()) && on_init();
  }

  /**
   * Wrapper init method that accepts pointer to the Node.
   * For details see other init method.
   */
  virtual bool init(
    const std::vector<std::string> & joint_names, const rclcpp::Node::SharedPtr & node,
    const std::string & robot_description_topic = "/robot_description")
  {
    return init(
      joint_names, node->get_node_parameters_interface(), node->get_node_logging_interface(),
      robot_description_topic);
  }

  /**
   * Wrapper init method that accepts pointer to the LifecycleNode.
   * For details see other init method.
   */
  virtual bool init(
    const std::vector<std::string> & joint_names,
    const rclcpp_lifecycle::LifecycleNode::SharedPtr & lifecycle_node,
    const std::string & robot_description_topic = "/robot_description")
  {
    return init(
      joint_names, lifecycle_node->get_node_parameters_interface(),
      lifecycle_node->get_node_logging_interface(), robot_description_topic);
  }

  virtual bool configure(const JointLimitsStateDataType & current_joint_states)
  {
    return on_configure(current_joint_states);
  }

  /** \brief Enforce joint limits to desired joint state for multiple physical quantities.
   *
   * Generic enforce method that calls implementation-specific `on_enforce` method.
   *
   * \param[in] current_joint_states current joint states a robot is in.
   * \param[in,out] desired_joint_states joint state that should be adjusted to obey the limits.
   * \param[in] dt time delta to calculate missing integrals and derivation in joint limits.
   * \returns true if limits are enforced, otherwise false.
   */
  virtual bool enforce(
    const JointLimitsStateDataType & current_joint_states,
    JointLimitsStateDataType & desired_joint_states, const rclcpp::Duration & dt)
  {
    joint_limits_ = *(updated_limits_.readFromRT());
    return on_enforce(current_joint_states, desired_joint_states, dt);
  }

  virtual void reset_internals() = 0;

protected:
  /** \brief Method is realized by an implementation.
   *
   * Implementation-specific initialization of limiter's internal states and libraries.
   * \returns true if initialization was successful, otherwise false.
   */
  virtual bool on_init() = 0;

  /** \brief Method is realized by an implementation.
   *
   * Implementation-specific configuration of limiter's internal states and libraries.
   * \returns true if initialization was successful, otherwise false.
   */
  virtual bool on_configure(const JointLimitsStateDataType & current_joint_states) = 0;

  /** \brief Method is realized by an implementation.
   *
   * Filter-specific implementation of the joint limits enforce algorithm for multiple dependent
   * physical quantities.
   *
   * \param[in] current_joint_states current joint states a robot is in.
   * \param[in,out] desired_joint_states joint state that should be adjusted to obey the limits.
   * \param[in] dt time delta to calculate missing integrals and derivation in joint limits.
   * \returns true if limits are enforced, otherwise false.
   */
  virtual bool on_enforce(
    const JointLimitsStateDataType & current_joint_states,
    JointLimitsStateDataType & desired_joint_states, const rclcpp::Duration & dt) = 0;

  /** \brief Checks if the logging interface is set.
   * \returns true if the logging interface is available, otherwise false.
   *
   * \note this way of interfacing would be useful for instances where the logging interface is not
   * available, for example in the ResourceManager or ResourceStorage classes.
   */
  bool has_logging_interface() const { return node_logging_itf_ != nullptr; }

  /** \brief Checks if the parameter interface is set.
   * \returns true if the parameter interface is available, otherwise false.
   *
   * * \note this way of interfacing would be useful for instances where the logging interface is
   * not available, for example in the ResourceManager or ResourceStorage classes.
   */
  bool has_parameter_interface() const { return node_param_itf_ != nullptr; }

  size_t number_of_joints_;
  std::vector<std::string> joint_names_;
  std::vector<joint_limits::JointLimits> joint_limits_;
  std::vector<joint_limits::SoftJointLimits> soft_joint_limits_;
  rclcpp::node_interfaces::NodeParametersInterface::SharedPtr node_param_itf_;
  rclcpp::node_interfaces::NodeLoggingInterface::SharedPtr node_logging_itf_;

private:
  rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr parameter_callback_;
  realtime_tools::RealtimeBuffer<std::vector<joint_limits::JointLimits>> updated_limits_;
};

}  // namespace joint_limits

#endif  // JOINT_LIMITS__JOINT_LIMITER_INTERFACE_HPP_
