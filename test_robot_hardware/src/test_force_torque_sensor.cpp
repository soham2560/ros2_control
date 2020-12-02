// Copyright 2020 ros2_control Development Team
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

#include <algorithm>
#include <cmath>
#include <memory>
#include <vector>

#include "hardware_interface/components/base_interface.hpp"
#include "hardware_interface/components/sensor_interface.hpp"

using hardware_interface::status;
using hardware_interface::return_type;
using hardware_interface::StateInterface;
using hardware_interface::components::BaseInterface;
using hardware_interface::components::SensorInterface;

namespace test_robot_hardware
{

class TestForceTorqueSensor : public BaseInterface<SensorInterface>
{
  return_type configure(const hardware_interface::HardwareInfo & sensor_info) override
  {
    if (configure_default(sensor_info) != return_type::OK) {
      return return_type::ERROR;
    }

    const auto & state_interfaces = info_.sensors[0].state_interfaces;
    if (state_interfaces.size() != 6) {return return_type::ERROR;}
    for (const auto & ft_key : {"fx", "fy", "fz", "tx", "ty", "tz"}) {
      if (std::find_if(
          state_interfaces.begin(), state_interfaces.end(), [&ft_key](const auto & interface_info) {
            return interface_info.name == ft_key;
          }) == state_interfaces.end())
      {
        return return_type::ERROR;
      }
    }

    fprintf(stderr, "TestForceTorqueSensor configured successfully.\n");
    return return_type::OK;
  }

  std::vector<StateInterface> export_state_interfaces() override
  {
    std::vector<StateInterface> state_interfaces;

    const auto & sensor_name = info_.sensors[0].name;
    state_interfaces.emplace_back(
      hardware_interface::StateInterface(
        sensor_name,
        "fx",
        &values_.fx));
    state_interfaces.emplace_back(
      hardware_interface::StateInterface(
        sensor_name,
        "fy",
        &values_.fy));
    state_interfaces.emplace_back(
      hardware_interface::StateInterface(
        sensor_name,
        "fz",
        &values_.fz));
    state_interfaces.emplace_back(
      hardware_interface::StateInterface(
        sensor_name,
        "tx",
        &values_.tx));
    state_interfaces.emplace_back(
      hardware_interface::StateInterface(
        sensor_name,
        "ty",
        &values_.ty));
    state_interfaces.emplace_back(
      hardware_interface::StateInterface(
        sensor_name,
        "tz",
        &values_.tz));

    return state_interfaces;
  }

  return_type start() override
  {
    return return_type::OK;
  }

  return_type stop() override
  {
    return return_type::OK;
  }

  return_type read() override
  {
    values_.fx = fmod((values_.fx + 1.0), 10);
    values_.fy = fmod((values_.fy + 1.0), 10);
    values_.fz = fmod((values_.fz + 1.0), 10);
    values_.tx = fmod((values_.tx + 1.0), 10);
    values_.ty = fmod((values_.ty + 1.0), 10);
    values_.tz = fmod((values_.tz + 1.0), 10);
    return return_type::OK;
  }

private:
  struct FTValues
  {
    double fx = 0.0;
    double fy = 0.0;
    double fz = 0.0;
    double tx = 0.0;
    double ty = 0.0;
    double tz = 0.0;
  };

  FTValues values_;
};

}  // namespace test_robot_hardware

#include "pluginlib/class_list_macros.hpp"  // NOLINT
PLUGINLIB_EXPORT_CLASS(
  test_robot_hardware::TestForceTorqueSensor, hardware_interface::components::SensorInterface)
