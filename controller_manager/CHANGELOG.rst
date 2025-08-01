^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package controller_manager
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

5.4.0 (2025-07-21)
------------------
* Increase controller period tolerance further (`#2405 <https://github.com/ros-controls/ros2_control/issues/2405>`_)
* Fix controller activation crash on macOS (Fixes `#604 <https://github.com/ros-controls/ros2_control/issues/604>`_) (`#2391 <https://github.com/ros-controls/ros2_control/issues/2391>`_)
* Increase controller period tolerance in tests (`#2388 <https://github.com/ros-controls/ros2_control/issues/2388>`_)
* [spawner] Fix Lock timeout error crashes (`#2386 <https://github.com/ros-controls/ros2_control/issues/2386>`_)
* [Spawner] Fix the scope issue of the logger (`#2382 <https://github.com/ros-controls/ros2_control/issues/2382>`_)
* Increase tolerance to improve the success rate of the tests (`#2373 <https://github.com/ros-controls/ros2_control/issues/2373>`_)
* [Spawner] Change strategy for `--unload-on-kill` option (`#2372 <https://github.com/ros-controls/ros2_control/issues/2372>`_)
* Contributors: Dhruv Patel, Jasper van Brakel, Sai Kishor Kothakota

5.3.0 (2025-07-02)
------------------
* Cleanup old internal API (`#2346 <https://github.com/ros-controls/ros2_control/issues/2346>`_)
* added params approach to allow propagation in gz_ros2_control (`#2340 <https://github.com/ros-controls/ros2_control/issues/2340>`_)
* Deactivate controllers with command interfaces to hardware on DEACTIVATE (`#2334 <https://github.com/ros-controls/ros2_control/issues/2334>`_)
* Shift to Struct based Method and Constructors, with Executor passed from CM to `on_init()` (`#2323 <https://github.com/ros-controls/ros2_control/issues/2323>`_)
* Contributors: Marq Rasmussen, Sai Kishor Kothakota, Soham Patil

5.2.0 (2025-06-07)
------------------
* Move `enforce_command_limits` parameter to GPL parameters (`#2305 <https://github.com/ros-controls/ros2_control/issues/2305>`_)
* Cleanup test name (`#2295 <https://github.com/ros-controls/ros2_control/issues/2295>`_)
* check_controllers_running: Make timeout a parameter  (`#2278 <https://github.com/ros-controls/ros2_control/issues/2278>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota

5.1.0 (2025-05-24)
------------------
* Use target_link_libraries instead of ament_target_dependencies (`#2266 <https://github.com/ros-controls/ros2_control/issues/2266>`_)
* Cleanup deprecations in `ros_control`  (`#2258 <https://github.com/ros-controls/ros2_control/issues/2258>`_)
* Contributors: Sai Kishor Kothakota

5.0.0 (2025-05-21)
------------------
* [CM] Add option to avoid shutting down on hardware initial state failure (`#2230 <https://github.com/ros-controls/ros2_control/issues/2230>`_)
* Statically allocate string concatenations using FMT formatting (`#2205 <https://github.com/ros-controls/ros2_control/issues/2205>`_)
* Suppress the deprecation warnings of the hardware_interface API (`#2223 <https://github.com/ros-controls/ros2_control/issues/2223>`_)
* Use `warning` attribute of RcutilsLogger (`#2244 <https://github.com/ros-controls/ros2_control/issues/2244>`_)
* [CM] Set default strictness of switch_controllers using parameters (`#2168 <https://github.com/ros-controls/ros2_control/issues/2168>`_)
* Add `data_type` field to the HardwareInterfaces message (`#2204 <https://github.com/ros-controls/ros2_control/issues/2204>`_)
* Add new strictness modes to SwitchController service (`#2224 <https://github.com/ros-controls/ros2_control/issues/2224>`_)
* Contributors: Marq Rasmussen, Sai Kishor Kothakota, mini-1235

4.29.0 (2025-05-04)
-------------------
* Use the new reusable helpers methods in hardware diagnostics (`#2216 <https://github.com/ros-controls/ros2_control/issues/2216>`_)
* [Diagnostics] Add diagnostics of execution time and periodicity of the hardware components (`#2086 <https://github.com/ros-controls/ros2_control/issues/2086>`_)
* Add common reusable helper methods header (`#2099 <https://github.com/ros-controls/ros2_control/issues/2099>`_)
* Use filelock in spawner to avoid concurrent operations (`#2202 <https://github.com/ros-controls/ros2_control/issues/2202>`_)
* increase test tolerance to reduce flakiness (`#2212 <https://github.com/ros-controls/ros2_control/issues/2212>`_)
* Add a method to perform the hardware command mode changes (`#2203 <https://github.com/ros-controls/ros2_control/issues/2203>`_)
* Fix typos: preceeding -> preceding (`#2206 <https://github.com/ros-controls/ros2_control/issues/2206>`_)
* Throttle the overrun logs (`#2201 <https://github.com/ros-controls/ros2_control/issues/2201>`_)
* doc: Added explanation of preceding/following controllers (`#2192 <https://github.com/ros-controls/ros2_control/issues/2192>`_)
* Contributors: Christoph Fröhlich, Martin Pecka, Sai Kishor Kothakota

4.28.1 (2025-04-17)
-------------------
* Fix the enforce_command_limits deactivation (`#2181 <https://github.com/ros-controls/ros2_control/issues/2181>`_)
* Contributors: Sai Kishor Kothakota

4.28.0 (2025-04-10)
-------------------
* Integrate joint limit enforcement into `ros2_control` framework functional with Async controllers and components  (`#2047 <https://github.com/ros-controls/ros2_control/issues/2047>`_)
* Make all packages use gmock, not gtest (`#2162 <https://github.com/ros-controls/ros2_control/issues/2162>`_)
* Fix async controllers deactivation regime (`#2017 <https://github.com/ros-controls/ros2_control/issues/2017>`_)
* apply pre-commit changes (`#2160 <https://github.com/ros-controls/ros2_control/issues/2160>`_)
* Add tests for multiple controller ros args (`#2155 <https://github.com/ros-controls/ros2_control/issues/2155>`_)
* Bump version of pre-commit hooks (`#2156 <https://github.com/ros-controls/ros2_control/issues/2156>`_)
* Allow for multiple controller-ros-args arguments in spawner.py (`#2150 <https://github.com/ros-controls/ros2_control/issues/2150>`_)
* Update `rqt_controller_manager` controller state color scheme to match list_controllers color scheme (`#2143 <https://github.com/ros-controls/ros2_control/issues/2143>`_)
* Fix generate_controllers_spawner_launch_description_from_dict (`#2146 <https://github.com/ros-controls/ros2_control/issues/2146>`_)
* Use ros2_control_cmake (`#2134 <https://github.com/ros-controls/ros2_control/issues/2134>`_)
* [Docs] Update determinism section (`#2131 <https://github.com/ros-controls/ros2_control/issues/2131>`_)
* Remove the dangling param flag for robot_description fom ROS parameters (`#2115 <https://github.com/ros-controls/ros2_control/issues/2115>`_)
* [Doc] Add documentation of different controller manager clocks (`#2109 <https://github.com/ros-controls/ros2_control/issues/2109>`_)
* [CM] Extend the list controller and hardware components messages (`#2102 <https://github.com/ros-controls/ros2_control/issues/2102>`_)
* Improve package descriptions & update maintainers (`#2103 <https://github.com/ros-controls/ros2_control/issues/2103>`_)
* Reject duplicate state/command interfaces after configuring the controller  (`#2090 <https://github.com/ros-controls/ros2_control/issues/2090>`_)
* [CM] Add message field to the `switch_controller` service (`#2088 <https://github.com/ros-controls/ros2_control/issues/2088>`_)
* Update doc: async update support for controller (`#2096 <https://github.com/ros-controls/ros2_control/issues/2096>`_)
* Use monotonic clock for triggering read-update-write cycles + fix for overruns (`#2046 <https://github.com/ros-controls/ros2_control/issues/2046>`_)
* Add some logging for `unload_on_kill` keyboard interrupt (`#2097 <https://github.com/ros-controls/ros2_control/issues/2097>`_)
* [CM] Add controller_manager activity topic (`#2006 <https://github.com/ros-controls/ros2_control/issues/2006>`_)
* Improve diagnostics strings (`#2078 <https://github.com/ros-controls/ros2_control/issues/2078>`_)
* Contributors: Bence Magyar, Christoph Fröhlich, Julia Jia, Sai Kishor Kothakota, Soham Patil, danielcostanzi18, github-actions[bot]

4.27.0 (2025-03-01)
-------------------
* [HW Components] Add fix for async hardware components improper rate (`#2076 <https://github.com/ros-controls/ros2_control/issues/2076>`_)
* [CM] Skip `robot_description` topic remapping for controllers (`#2082 <https://github.com/ros-controls/ros2_control/issues/2082>`_)
* [Spawner] Fix case with wildcard AND explicit controller in the same file (`#2080 <https://github.com/ros-controls/ros2_control/issues/2080>`_)
* [Handle] Use `get_optional` instead of `get_value<double>` (`#2061 <https://github.com/ros-controls/ros2_control/issues/2061>`_)
* [CM] Fix `switch_controller` behaviour with unknown controller switch request (`#2060 <https://github.com/ros-controls/ros2_control/issues/2060>`_)
* Cleanup chainable controller exported interfaces to allow reconfiguring  (`#2073 <https://github.com/ros-controls/ros2_control/issues/2073>`_)
* Update memlock values in doc (`#2066 <https://github.com/ros-controls/ros2_control/issues/2066>`_)
* Add new `get_value` API for Handles and Interfaces (`#1976 <https://github.com/ros-controls/ros2_control/issues/1976>`_)
* Fix unused timeouts in load/unload controller (`#2052 <https://github.com/ros-controls/ros2_control/issues/2052>`_)
* [CM] Improve memory allocation with buffer variables (`#1801 <https://github.com/ros-controls/ros2_control/issues/1801>`_)
* Integrate pal_statistics for introspection of controllers, hardware components and more (`#1918 <https://github.com/ros-controls/ros2_control/issues/1918>`_)
* [CM] Fix the controller deactivation on the control cycles returning ERROR  (`#1756 <https://github.com/ros-controls/ros2_control/issues/1756>`_)
* Contributors: Christoph Fröhlich, Dawid Kmak, Sai Kishor Kothakota, bijoua29

4.26.0 (2025-02-07)
-------------------
* Slightly increase timeout of test_spawner_unspawner (`#2037 <https://github.com/ros-controls/ros2_control/issues/2037>`_)
* Contributors: Christoph Fröhlich

4.25.0 (2025-01-29)
-------------------
* Handle SIGINT properly in the controller manager (`#2014 <https://github.com/ros-controls/ros2_control/issues/2014>`_)
* Fix the initial wrong periodicity reported by controller_manager (`#2018 <https://github.com/ros-controls/ros2_control/issues/2018>`_)
* Use `target_compile_definitions` instead of installing test files (`#2009 <https://github.com/ros-controls/ros2_control/issues/2009>`_)
* Fix a heading level (`#2007 <https://github.com/ros-controls/ros2_control/issues/2007>`_)
* Update path of GPL (`#1994 <https://github.com/ros-controls/ros2_control/issues/1994>`_)
* Fix: on_shutdown callback of controllers never get executed (`#1995 <https://github.com/ros-controls/ros2_control/issues/1995>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota, Wiktor Bajor

4.24.0 (2025-01-13)
-------------------
* [CM] Remove obsolete ControllerMock from the tests (`#1990 <https://github.com/ros-controls/ros2_control/issues/1990>`_)
* Initialize robot description in ControllerManager (`#1983 <https://github.com/ros-controls/ros2_control/issues/1983>`_)
* Contributors: Dominic Reber, Wiktor Bajor

4.23.0 (2024-12-29)
-------------------
* Remove boilerplate visibility macros (`#1972 <https://github.com/ros-controls/ros2_control/issues/1972>`_)
* Move test_utils module from demos repo (`#1955 <https://github.com/ros-controls/ros2_control/issues/1955>`_)
* Fix deprecated usage of lock_memory API (`#1970 <https://github.com/ros-controls/ros2_control/issues/1970>`_)
* Fix spawner behaviour on failing controller activation or deactivation (`#1941 <https://github.com/ros-controls/ros2_control/issues/1941>`_)
* Contributors: Bence Magyar, Christoph Fröhlich, Sai Kishor Kothakota, Sudip Roy

4.22.0 (2024-12-20)
-------------------
* Async Hardware Components (`#1567 <https://github.com/ros-controls/ros2_control/issues/1567>`_)
* Add controller node options args to be able to set controller specific node arguments (`#1713 <https://github.com/ros-controls/ros2_control/issues/1713>`_)
* Use singleton approach to store and reuse the service clients (`#1949 <https://github.com/ros-controls/ros2_control/issues/1949>`_)
* Increase the max and min periodicity tolerances to fix flaky tests (`#1937 <https://github.com/ros-controls/ros2_control/issues/1937>`_)
* Fix the spawner to support full wildcard parameter entries (`#1933 <https://github.com/ros-controls/ros2_control/issues/1933>`_)
* Suppress unnecessary warnings in clock received validation (`#1935 <https://github.com/ros-controls/ros2_control/issues/1935>`_)
* Optimize the valid time check in the update loop (`#1923 <https://github.com/ros-controls/ros2_control/issues/1923>`_)
* [CI] Add clang job, setup concurrency, use rt_tools humble branch (`#1910 <https://github.com/ros-controls/ros2_control/issues/1910>`_)
* Update CPU affinity parameter to be able to set multiple CPUs (`#1915 <https://github.com/ros-controls/ros2_control/issues/1915>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota, Takashi Sato

4.21.0 (2024-12-06)
-------------------
* Use the .hpp headers from realtime_tools package (`#1916 <https://github.com/ros-controls/ros2_control/issues/1916>`_)
* CM: Check if a valid time is received (`#1901 <https://github.com/ros-controls/ros2_control/issues/1901>`_)
* Lock memory by default on a realtime system setup (`#1896 <https://github.com/ros-controls/ros2_control/issues/1896>`_)
* Fix the launch_utils regression (`#1909 <https://github.com/ros-controls/ros2_control/issues/1909>`_)
* [Diagnostics] Add diagnostics of execution time and periodicity of the controllers and controller_manager (`#1871 <https://github.com/ros-controls/ros2_control/issues/1871>`_)
* Add more parameter overriding tests by parsing multiple parameter files (`#1899 <https://github.com/ros-controls/ros2_control/issues/1899>`_)
* add logic for 'params_file' to handle both string and string_array (`#1898 <https://github.com/ros-controls/ros2_control/issues/1898>`_)
* [Spawner] Accept parsing multiple `--param-file` arguments to spawner  (`#1805 <https://github.com/ros-controls/ros2_control/issues/1805>`_)
* Add documentation on `ros2_control_node` and make lock_memory false by default (`#1890 <https://github.com/ros-controls/ros2_control/issues/1890>`_)
* Add service call timeout argument in spawner (`#1808 <https://github.com/ros-controls/ros2_control/issues/1808>`_)
* Add CM `switch_controller` service timeout as parameter to spawner.py (`#1790 <https://github.com/ros-controls/ros2_control/issues/1790>`_)
* Fix the missing bcolors.ENDC in hardware_spawner log prints (`#1870 <https://github.com/ros-controls/ros2_control/issues/1870>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota, Tony Najjar

4.20.0 (2024-11-08)
-------------------
* change from thread_priority.hpp to realtime_helpers.hpp (`#1829 <https://github.com/ros-controls/ros2_control/issues/1829>`_)
* Use Clock instead of Rate for backward compatibility of rolling (`#1864 <https://github.com/ros-controls/ros2_control/issues/1864>`_)
* [ros2_control_node] Handle simulation environment clocks (`#1810 <https://github.com/ros-controls/ros2_control/issues/1810>`_)
* [CM] Fix controller missing update cycles in a real setup (`#1774 <https://github.com/ros-controls/ros2_control/issues/1774>`_)
* [ros2_control_node] Add option to set the CPU affinity  (`#1852 <https://github.com/ros-controls/ros2_control/issues/1852>`_)
* [ros2_control_node] Add the realtime_tools lock_memory method to prevent page faults (`#1822 <https://github.com/ros-controls/ros2_control/issues/1822>`_)
* Fix CMP0115 (`#1830 <https://github.com/ros-controls/ros2_control/issues/1830>`_)
* fix: typo use thread_priority (`#1844 <https://github.com/ros-controls/ros2_control/issues/1844>`_)
* Fix Hardware spawner and add tests for it (`#1759 <https://github.com/ros-controls/ros2_control/issues/1759>`_)
* add thread_priority option to the ros2_control_node (`#1820 <https://github.com/ros-controls/ros2_control/issues/1820>`_)
* Contributors: Baris Yazici, Christoph Fröhlich, Felix Exner (fexner), Sai Kishor Kothakota

4.19.0 (2024-10-26)
-------------------
* Fix timeout value in std output (`#1807 <https://github.com/ros-controls/ros2_control/issues/1807>`_)
* [CM] Async Function Handler for Controllers (`#1489 <https://github.com/ros-controls/ros2_control/issues/1489>`_)
* [Spawner] Add support for wildcard entries in the controller param files  (`#1724 <https://github.com/ros-controls/ros2_control/issues/1724>`_)
* [Feature] Fallback controllers (`#1789 <https://github.com/ros-controls/ros2_control/issues/1789>`_)
* Check the update_rate set to the controllers to be a valid one (`#1788 <https://github.com/ros-controls/ros2_control/issues/1788>`_)
* [PR-1689] Follow-up PR of the controller interface variants integration (`#1779 <https://github.com/ros-controls/ros2_control/issues/1779>`_)
* Improve diagnostics of Controllers, Hardware Components and Controller Manager (`#1764 <https://github.com/ros-controls/ros2_control/issues/1764>`_)
* Improve launch utils to support the multiple controller names (`#1782 <https://github.com/ros-controls/ros2_control/issues/1782>`_)
* [RM/HW] Constify the exported state interfaces using ConstSharedPtr (`#1767 <https://github.com/ros-controls/ros2_control/issues/1767>`_)
* [CM] Throw an exception when the components initially fail to be in the required state (`#1729 <https://github.com/ros-controls/ros2_control/issues/1729>`_)
* Contributors: Felix Exner (fexner), Sai Kishor Kothakota

4.18.0 (2024-10-07)
-------------------
* Adapt controller Reference/StateInterfaces to New Way of Exporting (variant support) (`#1689 <https://github.com/ros-controls/ros2_control/issues/1689>`_)
* Add test coverage for `params_file` parameter in spawner/unspawner tests (`#1754 <https://github.com/ros-controls/ros2_control/issues/1754>`_)
* [ros2controlcli] add params file parsing to load_controller verb and add namespacing support  (`#1703 <https://github.com/ros-controls/ros2_control/issues/1703>`_)
* Contributors: Manuel Muth, Sai Kishor Kothakota, Santosh Govindaraj

4.17.0 (2024-09-11)
-------------------
* Log exception type when catching the exception (`#1749 <https://github.com/ros-controls/ros2_control/issues/1749>`_)
* [CM] Handle other exceptions while loading the controller plugin (`#1731 <https://github.com/ros-controls/ros2_control/issues/1731>`_)
* remove unnecessary log of the CM args (`#1720 <https://github.com/ros-controls/ros2_control/issues/1720>`_)
* Fix unload of controllers when spawned with `--unload-on-kill` (`#1717 <https://github.com/ros-controls/ros2_control/issues/1717>`_)
* Rename `get_state` and `set_state` Functions to `get/set_lifecylce_state` (variant support) (`#1683 <https://github.com/ros-controls/ros2_control/issues/1683>`_)
* Contributors: Manuel Muth, Sai Kishor Kothakota

4.16.1 (2024-08-24)
-------------------
* propage a portion of global args to the controller nodes (`#1712 <https://github.com/ros-controls/ros2_control/issues/1712>`_)
* Contributors: Sai Kishor Kothakota

4.16.0 (2024-08-22)
-------------------
* inform user what reason is for not setting rt policy, inform is policy (`#1705 <https://github.com/ros-controls/ros2_control/issues/1705>`_)
* Fix params_file typo in spawner and update release notes for use_global_arguments (`#1701 <https://github.com/ros-controls/ros2_control/issues/1701>`_)
* Fix spawner tests timeout (`#1692 <https://github.com/ros-controls/ros2_control/issues/1692>`_)
* Refactor spawner to be able to reuse code for ros2controlcli (`#1661 <https://github.com/ros-controls/ros2_control/issues/1661>`_)
* Robustify controller spawner and add integration test with many controllers (`#1501 <https://github.com/ros-controls/ros2_control/issues/1501>`_)
* Handle waiting in Spawner and align Hardware Spawner functionality (`#1562 <https://github.com/ros-controls/ros2_control/issues/1562>`_)
* Make list controller and list hardware components immediately visualize the state. (`#1606 <https://github.com/ros-controls/ros2_control/issues/1606>`_)
* [CI] Add coveragepy and remove ignore: test (`#1668 <https://github.com/ros-controls/ros2_control/issues/1668>`_)
* Fix spawner unload on kill test (`#1675 <https://github.com/ros-controls/ros2_control/issues/1675>`_)
* [CM] Add more logging for easier debugging (`#1645 <https://github.com/ros-controls/ros2_control/issues/1645>`_)
* refactor SwitchParams to fix the incosistencies in the spawner tests (`#1638 <https://github.com/ros-controls/ros2_control/issues/1638>`_)
* Contributors: Bence Magyar, Christoph Fröhlich, Dr. Denis, Felix Exner (fexner), Manuel Muth, Sai Kishor Kothakota

4.15.0 (2024-08-05)
-------------------
* Add missing include for executors (`#1653 <https://github.com/ros-controls/ros2_control/issues/1653>`_)
* Fix the namespaced controller_manager spawner + added tests (`#1640 <https://github.com/ros-controls/ros2_control/issues/1640>`_)
* CM: Add missing includes (`#1641 <https://github.com/ros-controls/ros2_control/issues/1641>`_)
* Fix rst markup (`#1642 <https://github.com/ros-controls/ros2_control/issues/1642>`_)
* Add a pytest launch file to test ros2_control_node (`#1636 <https://github.com/ros-controls/ros2_control/issues/1636>`_)
* [CM] Remove deprecated spawner args (`#1639 <https://github.com/ros-controls/ros2_control/issues/1639>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota

4.14.0 (2024-07-23)
-------------------
* Unused header cleanup (`#1627 <https://github.com/ros-controls/ros2_control/issues/1627>`_)
* Remove noqa (`#1626 <https://github.com/ros-controls/ros2_control/issues/1626>`_)
* Fix controller starting with later load of robot description test (`#1624 <https://github.com/ros-controls/ros2_control/issues/1624>`_)
* [CM] Remove support for the description parameter and use only `robot_description` topic (`#1358 <https://github.com/ros-controls/ros2_control/issues/1358>`_)
* Contributors: Christoph Fröhlich, Dr. Denis, Henry Moore, Sai Kishor Kothakota

4.13.0 (2024-07-08)
-------------------
* Change the spamming checking interface ERROR to DEBUG (`#1605 <https://github.com/ros-controls/ros2_control/issues/1605>`_)
* [ResourceManager] Propagate access to logger and clock interfaces to HardwareComponent (`#1585 <https://github.com/ros-controls/ros2_control/issues/1585>`_)
* [ControllerChaining] Export state interfaces from chainable controllers (`#1021 <https://github.com/ros-controls/ros2_control/issues/1021>`_)
* Contributors: Sai Kishor Kothakota

4.12.0 (2024-07-01)
-------------------
* [rqt_controller_manager] Add hardware components (`#1455 <https://github.com/ros-controls/ros2_control/issues/1455>`_)
* [RM] Rename `load_urdf` method to `load_and_initialize_components` and add error handling there to avoid stack crashing when error happens. (`#1354 <https://github.com/ros-controls/ros2_control/issues/1354>`_)
* Fix update `period` for the first update after activation (`#1551 <https://github.com/ros-controls/ros2_control/issues/1551>`_)
* Bump version of pre-commit hooks (`#1556 <https://github.com/ros-controls/ros2_control/issues/1556>`_)
* Contributors: Christoph Fröhlich, Dr. Denis, github-actions[bot]

4.11.0 (2024-05-14)
-------------------
* Add find_package for ament_cmake_gen_version_h (`#1534 <https://github.com/ros-controls/ros2_control/issues/1534>`_)
* Contributors: Christoph Fröhlich

4.10.0 (2024-05-08)
-------------------
* allow extra spawner arguments to not declare every argument in launch utils (`#1505 <https://github.com/ros-controls/ros2_control/issues/1505>`_)
* Working async controllers and components [not synchronized] (`#1041 <https://github.com/ros-controls/ros2_control/issues/1041>`_)
* Add fallback controllers list to the ControllerInfo (`#1503 <https://github.com/ros-controls/ros2_control/issues/1503>`_)
* Add a functionality to look for the controller type in the params file when not parsed (`#1502 <https://github.com/ros-controls/ros2_control/issues/1502>`_)
* Add controller exception handling in controller manager (`#1507 <https://github.com/ros-controls/ros2_control/issues/1507>`_)
* Contributors: Márk Szitanics, Sai Kishor Kothakota

4.9.0 (2024-04-30)
------------------
* Deactivate the controllers when they return error similar to hardware (`#1499 <https://github.com/ros-controls/ros2_control/issues/1499>`_)
* Component parser: Get mimic information from URDF (`#1256 <https://github.com/ros-controls/ros2_control/issues/1256>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota

4.8.0 (2024-03-27)
------------------
* generate version.h file per package using the ament_generate_version_header  (`#1449 <https://github.com/ros-controls/ros2_control/issues/1449>`_)
* Use ament_cmake generated rclcpp version header (`#1448 <https://github.com/ros-controls/ros2_control/issues/1448>`_)
* Replace random_shuffle with shuffle. (`#1446 <https://github.com/ros-controls/ros2_control/issues/1446>`_)
* Contributors: Chris Lalancette, Sai Kishor Kothakota

4.7.0 (2024-03-22)
------------------
* add missing compiler definitions of RCLCPP_VERSION_MAJOR (`#1440 <https://github.com/ros-controls/ros2_control/issues/1440>`_)
* Codeformat from new pre-commit config (`#1433 <https://github.com/ros-controls/ros2_control/issues/1433>`_)
* add conditioning to get_parameter_value method import (`#1428 <https://github.com/ros-controls/ros2_control/issues/1428>`_)
* Change the controller sorting with an approach similar to directed acyclic graphs (`#1384 <https://github.com/ros-controls/ros2_control/issues/1384>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota

4.6.0 (2024-03-02)
------------------
* Add -Werror=missing-braces to compile options (`#1423 <https://github.com/ros-controls/ros2_control/issues/1423>`_)
* added conditioning to have rolling tags compilable in older versions (`#1422 <https://github.com/ros-controls/ros2_control/issues/1422>`_)
* [CM] Remove deprecated parameters for initial component states. (`#1357 <https://github.com/ros-controls/ros2_control/issues/1357>`_)
* [BREAKING CHANGE] Use `robot_description` topic instead of `~/robot_description` and update docs regarding this (`#1410 <https://github.com/ros-controls/ros2_control/issues/1410>`_)
* [CI] Code coverage + pre-commit (`#1413 <https://github.com/ros-controls/ros2_control/issues/1413>`_)
* Fix multiple chainable controller activation bug (`#1401 <https://github.com/ros-controls/ros2_control/issues/1401>`_)
* Contributors: Christoph Fröhlich, Dr. Denis, Felix Exner (fexner), Sai Kishor Kothakota

4.5.0 (2024-02-12)
------------------
* check for state of the controller node before cleanup (`#1363 <https://github.com/ros-controls/ros2_control/issues/1363>`_)
* [CM] Use explicit constants in controller tests. (`#1356 <https://github.com/ros-controls/ros2_control/issues/1356>`_)
* [CM] Optimized debug output about interfaces when switching controllers. (`#1355 <https://github.com/ros-controls/ros2_control/issues/1355>`_)
* A method to get node options to setup the controller node #api-breaking (`#1169 <https://github.com/ros-controls/ros2_control/issues/1169>`_)
* Contributors: Dr. Denis, Sai Kishor Kothakota

4.4.0 (2024-01-31)
------------------
* Move `test_components` to own package (`#1325 <https://github.com/ros-controls/ros2_control/issues/1325>`_)
* Fix controller parameter loading issue in different cases (`#1293 <https://github.com/ros-controls/ros2_control/issues/1293>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota

4.3.0 (2024-01-20)
------------------
* [CM] Better readability and maintainability: rename variables, move code to more logical places 🔧 (`#1227 <https://github.com/ros-controls/ros2_control/issues/1227>`_)
* Initialize the controller manager services after initializing resource manager (`#1271 <https://github.com/ros-controls/ros2_control/issues/1271>`_)
* Issue 695: Changing 'namespace\_' variables to 'node_namespace' to make it more explicit (`#1239 <https://github.com/ros-controls/ros2_control/issues/1239>`_)
* Fix rqt controller manager crash on ros2_control restart (`#1273 <https://github.com/ros-controls/ros2_control/issues/1273>`_)
* [docs] Remove joint_state_controller (`#1263 <https://github.com/ros-controls/ros2_control/issues/1263>`_)
* controller_manager: Add space to string literal concatenation (`#1245 <https://github.com/ros-controls/ros2_control/issues/1245>`_)
* Try using SCHED_FIFO on any kernel (`#1142 <https://github.com/ros-controls/ros2_control/issues/1142>`_)
* [CM] Set chained controller interfaces 'available' for activated controllers (`#1098 <https://github.com/ros-controls/ros2_control/issues/1098>`_)
* [CM] Increase tests timeout (`#1224 <https://github.com/ros-controls/ros2_control/issues/1224>`_)
* Contributors: Christoph Fröhlich, Dr. Denis, Felix Exner (fexner), Sai Kishor Kothakota, Yasushi SHOJI, bailaC

4.2.0 (2023-12-12)
------------------
* [CM] Linting if/else statements (`#1193 <https://github.com/ros-controls/ros2_control/issues/1193>`_)
* Reformat with braces added (`#1209 <https://github.com/ros-controls/ros2_control/issues/1209>`_)
* Report inactive controllers as a diagnostics ok instead of an error (`#1184 <https://github.com/ros-controls/ros2_control/issues/1184>`_)
* Fix controller sorting issue while loading large number of controllers (`#1180 <https://github.com/ros-controls/ros2_control/issues/1180>`_)
* Contributors: Bence Magyar, Dr. Denis, Lennart Nachtigall, Sai Kishor Kothakota

4.1.0 (2023-11-30)
------------------
* Add few warning compiler options to error (`#1181 <https://github.com/ros-controls/ros2_control/issues/1181>`_)
* [ControllerManager] Fix all warnings from the latets features. (`#1174 <https://github.com/ros-controls/ros2_control/issues/1174>`_)
* Compute the actual update period for each controller (`#1140 <https://github.com/ros-controls/ros2_control/issues/1140>`_)
* Contributors: Dr. Denis, Sai Kishor Kothakota

4.0.0 (2023-11-21)
------------------
* Pass controller manager update rate on the init of the controller interface  (`#1141 <https://github.com/ros-controls/ros2_control/issues/1141>`_)
* Fix the controller sorting bug when the interfaces are not configured (fixes `#1164 <https://github.com/ros-controls/ros2_control/issues/1164>`_) (`#1165 <https://github.com/ros-controls/ros2_control/issues/1165>`_)
* Pass URDF to controllers on init (`#1088 <https://github.com/ros-controls/ros2_control/issues/1088>`_)
* Remove deprecation warning (`#1101 <https://github.com/ros-controls/ros2_control/issues/1101>`_)
* Contributors: Bence Magyar, Christoph Fröhlich, Sai Kishor Kothakota

3.21.0 (2023-11-06)
-------------------
* Sort controllers while configuring instead of while activating (`#1107 <https://github.com/ros-controls/ros2_control/issues/1107>`_)
* Contributors: Sai Kishor Kothakota

3.20.0 (2023-10-31)
-------------------
* Update spawner to accept controllers list and start them in sequence (`#1139 <https://github.com/ros-controls/ros2_control/issues/1139>`_)
* [ResourceManager] deactivate hardware from read/write return value (`#884 <https://github.com/ros-controls/ros2_control/issues/884>`_)
* Export of the get_cm_node_options() from robostack (`#1129 <https://github.com/ros-controls/ros2_control/issues/1129>`_)
* Contributors: Felix Exner (fexner), Olivier Stasse, Sai Kishor Kothakota

3.19.1 (2023-10-04)
-------------------
* Fix next controller update cycle time clock (`#1127 <https://github.com/ros-controls/ros2_control/issues/1127>`_)
* Contributors: Sai Kishor Kothakota

3.19.0 (2023-10-03)
-------------------
* Proper controller update rate (`#1105 <https://github.com/ros-controls/ros2_control/issues/1105>`_)
* Fix multiple calls to export reference interfaces (`#1108 <https://github.com/ros-controls/ros2_control/issues/1108>`_)
* [Docs] Fix information about activation and deactivation of chainable controllers (`#1104 <https://github.com/ros-controls/ros2_control/issues/1104>`_)
* Contributors: Dr. Denis, Sai Kishor Kothakota

3.18.0 (2023-08-17)
-------------------
* Controller sorting and proper execution in a chain (Fixes `#853 <https://github.com/ros-controls/ros2_control/issues/853>`_) (`#1063 <https://github.com/ros-controls/ros2_control/issues/1063>`_)
* Contributors: Sai Kishor Kothakota, Christoph Fröhlich, Dr Denis, Bence Magyar

3.17.0 (2023-08-07)
-------------------
* [CM] Fixes the issue with individual controller's update rate (`#1082 <https://github.com/ros-controls/ros2_control/issues/1082>`_)
* Fix deprecation warning (`#1093 <https://github.com/ros-controls/ros2_control/issues/1093>`_)
* Contributors: Christoph Fröhlich, Sai Kishor Kothakota

3.16.0 (2023-07-09)
-------------------
* added controller manager runner to have update cycles (`#1075 <https://github.com/ros-controls/ros2_control/issues/1075>`_)
* [CM] Make error message after trying to active controller more informative. (`#1066 <https://github.com/ros-controls/ros2_control/issues/1066>`_)
* Fix equal and higher controller update rate (`#1070 <https://github.com/ros-controls/ros2_control/issues/1070>`_)
* Create doc file for chained controllers (`#985 <https://github.com/ros-controls/ros2_control/issues/985>`_)
* Contributors: Dr. Denis, Sai Kishor Kothakota

3.15.0 (2023-06-23)
-------------------
* Enable setting of initial state in HW compoments (`#1046 <https://github.com/ros-controls/ros2_control/issues/1046>`_)
* [CM] Improve output when using robot description topic and give output about correct topic even remapped. (`#1059 <https://github.com/ros-controls/ros2_control/issues/1059>`_)
* Contributors: Dr. Denis

3.14.0 (2023-06-14)
-------------------
* Add -Wconversion flag to protect future developments (`#1053 <https://github.com/ros-controls/ros2_control/issues/1053>`_)
* [CM] Use `robot_description` topic instead of parameter and don't crash on empty URDF 🦿 (`#940 <https://github.com/ros-controls/ros2_control/issues/940>`_)
* enable ReflowComments to also use ColumnLimit on comments (`#1037 <https://github.com/ros-controls/ros2_control/issues/1037>`_)
* Docs: Use branch name substitution for all links (`#1031 <https://github.com/ros-controls/ros2_control/issues/1031>`_)
* Add text to assertions references (`#1023 <https://github.com/ros-controls/ros2_control/issues/1023>`_)
* Contributors: Christoph Fröhlich, Felix Exner (fexner), Manuel Muth, Sai Kishor Kothakota, gwalck

3.13.0 (2023-05-18)
-------------------
* Add class for thread management of async hw interfaces (`#981 <https://github.com/ros-controls/ros2_control/issues/981>`_)
* Fix GitHub link on control.ros.org (`#1022 <https://github.com/ros-controls/ros2_control/issues/1022>`_)
* Remove log-level argument from spawner script (`#1013 <https://github.com/ros-controls/ros2_control/issues/1013>`_)
* Contributors: Christoph Fröhlich, Márk Szitanics, Bijou Abraham

3.12.2 (2023-04-29)
-------------------

3.12.1 (2023-04-14)
-------------------

3.12.0 (2023-04-02)
-------------------
* [Controller Interface] Add time and period paramters to update_reference_from_subscribers() (`#846 <https://github.com/ros-controls/ros2_control/issues/846>`_) #API-break
* Contributors: Robotgir

3.11.0 (2023-03-22)
-------------------
* [ControllerManager] Add Class for Async Controllers and Lifecycle Management (`#932 <https://github.com/ros-controls/ros2_control/issues/932>`_)
* Consistent use of colors for warning and error msgs in spawner (`#974 <https://github.com/ros-controls/ros2_control/issues/974>`_)
* Fix wrong warning messages (`#973 <https://github.com/ros-controls/ros2_control/issues/973>`_)
* Add log level support to spawner node (`#972 <https://github.com/ros-controls/ros2_control/issues/972>`_)
* Contributors: Dr. Denis, Márk Szitanics, Bijou Abraham

3.10.0 (2023-03-16)
-------------------
* add spawner for hardware (`#941 <https://github.com/ros-controls/ros2_control/issues/941>`_)
* Contributors: Manuel Muth

3.9.1 (2023-03-09)
------------------

3.9.0 (2023-02-28)
------------------
* fix AttributeError: Parameter object attribute name is read-only (`#957 <https://github.com/ros-controls/ros2_control/issues/957>`_)
* Remove deprecations from CLI and controller_manager (`#948 <https://github.com/ros-controls/ros2_control/issues/948>`_)
* Expose node options to controller manager (`#942 <https://github.com/ros-controls/ros2_control/issues/942>`_)
* Contributors: Christoph Fröhlich, Noel Jiménez García, methylDragon

3.8.0 (2023-02-10)
------------------
* Fix CMake install so overriding works (`#926 <https://github.com/ros-controls/ros2_control/issues/926>`_)
* 🖤 Add Black formatter for Python files. (`#936 <https://github.com/ros-controls/ros2_control/issues/936>`_)
* Add list_hardware_components CLI <https://github.com/ros-controls/ros2_control/issues/796>`_ - Adds list_hardware_components to CLI (`#891 <https://github.com/ros-controls/ros2_control/issues/891>`_)
* Contributors: Andy McEvoy, Dr. Denis, Tyler Weaver

3.7.0 (2023-01-24)
------------------
* Do not use CLI calls but direct API for setting parameters. (`#910 <https://github.com/ros-controls/ros2_control/issues/910>`_)
* Optimize output of controller spawner (`#909 <https://github.com/ros-controls/ros2_control/issues/909>`_)
* ControllerManager: catch exception by reference (`#906 <https://github.com/ros-controls/ros2_control/issues/906>`_)
* Test fix: don't keep reference to the controller in the test when it should be destroyed in the controller manager (`#883 <https://github.com/ros-controls/ros2_control/issues/883>`_)
* Merge branch 'fix-update-rate' into humble (`#874 <https://github.com/ros-controls/ros2_control/issues/874>`_)
* Contributors: Christopher Wecht, Dr. Denis, Tony Najjar, sgmurray

3.6.0 (2023-01-12)
------------------
* Fix QoS deprecation warnings (`#879 <https://github.com/ros-controls/ros2_control/issues/879>`_)
* Add backward_ros to controller_manager (`#886 <https://github.com/ros-controls/ros2_control/issues/886>`_)
* Contributors: Andy McEvoy, Bence Magyar

3.5.1 (2023-01-06)
------------------
* Prevent controller manager from crashing when controller's plugin has error during loading. (`#881 <https://github.com/ros-controls/ros2_control/issues/881>`_)
* Contributors: Denis Štogl

3.5.0 (2022-12-06)
------------------
* Rename class type to plugin name #api-breaking #abi-breaking (`#780 <https://github.com/ros-controls/ros2_control/issues/780>`_)
* Namespace Loaded Controllers (`#852 <https://github.com/ros-controls/ros2_control/issues/852>`_)
* Contributors: Bence Magyar, sp-sophia-labs

3.4.0 (2022-11-27)
------------------
* Use a thread priority library from realtime_tools (`#794 <https://github.com/ros-controls/ros2_control/issues/794>`_)
* [Doc] Correct type of update_rate parameter (`#858 <https://github.com/ros-controls/ros2_control/issues/858>`_)
* Contributors: Andy Zelenak, Denis Štogl, Bence Magyar

3.3.0 (2022-11-15)
------------------
* Adding activation/deactivation tests for chain controllers (`#809 <https://github.com/ros-controls/ros2_control/issues/809>`_)
* Fix const-ness in std::chrono::time_point construction and explicitly use std::chrono::nanoseconds as std::chrono::time_point template parameter to help compilation on macOS as its std::chrono::system_clock::time_point defaults to std::chrono::milliseconds for duration type (`#848 <https://github.com/ros-controls/ros2_control/issues/848>`_)
* [ControllerManager] Fix wrong initialization order and avoid compiler warnings (`#836 <https://github.com/ros-controls/ros2_control/issues/836>`_)
* Contributors: Adrian Zwiener, Bilal Gill, Felix Exner, light-tech

3.2.0 (2022-10-15)
------------------

3.1.0 (2022-10-05)
------------------
* Don't ask to export reference interface if controller not 'inactive' or 'active' (`#824 <https://github.com/ros-controls/ros2_control/issues/824>`_)
* Add diagnostics for controllers activity (`#820 <https://github.com/ros-controls/ros2_control/issues/820>`_)
* Search for controller manager in the same namespace as spawner (`#810 <https://github.com/ros-controls/ros2_control/issues/810>`_)
* Handle HW errors on read and write in CM by stopping controllers (`#742 <https://github.com/ros-controls/ros2_control/issues/742>`_)
  Add code for deactivating controller when hardware gets an error on read and write.
  Fix misleading variable name in the tests.
  Remove all interface from available list for hardware when an error happens.
  Do some more variable renaming to the new nomenclature.
* Contributors: Denis Štogl, Tony Najjar

3.0.0 (2022-09-19)
------------------

2.15.0 (2022-09-19)
-------------------

2.14.0 (2022-09-04)
-------------------
* Add doxygen comments (`#777 <https://github.com/ros-controls/ros2_control/issues/777>`_)
* Contributors: Bence Magyar, Denis Štogl

2.13.0 (2022-08-03)
-------------------
* Clang tidy: delete a redundant return (`#790 <https://github.com/ros-controls/ros2_control/issues/790>`_)
* Add chained controllers information in list controllers service #abi-braking (`#758 <https://github.com/ros-controls/ros2_control/issues/758>`_)
  * add chained controllers in ros2controlcli
  * remove controller_group from service
  * added comments to ControllerState message
  * added comments to ChainedConnection message
* spawner.py: Fix python logging on deprecation warning (`#787 <https://github.com/ros-controls/ros2_control/issues/787>`_)
* Add documentation for realtime permission (`#781 <https://github.com/ros-controls/ros2_control/issues/781>`_)
* Fix bug in spawner with getter for node's logger (`#776 <https://github.com/ros-controls/ros2_control/issues/776>`_)
* Contributors: Andy Zelenak, Felix Exner, Paul Gesel, Bijou Abraham

2.12.1 (2022-07-14)
-------------------
* Rename CM members from start/stop to activate/deactivate nomenclature. (`#756 <https://github.com/ros-controls/ros2_control/issues/756>`_)
* Fix spelling in comment (`#769 <https://github.com/ros-controls/ros2_control/issues/769>`_)
* Contributors: Denis Štogl, Tyler Weaver

2.12.0 (2022-07-09)
-------------------
* Deprecate and rename `start` and `stop` nomenclature toward user to `activate` and `deactivate` #ABI-breaking (`#755 <https://github.com/ros-controls/ros2_control/issues/755>`_)
  * Rename fields and deprecate old nomenclature.
  * Add new defines to SwitchController.srv
  * Deprecated start/stop nomenclature in all CLI commands.
  * Deprecate 'start_asap' too as other fields.
* [ros2_control_node] Automatically detect if RT kernel is used and opportunistically enable SCHED_FIFO (`#748 <https://github.com/ros-controls/ros2_control/issues/748>`_)
* Contributors: Denis Štogl, Tyler Weaver

2.11.0 (2022-07-03)
-------------------
* Remove hybrid services in controller manager. (`#761 <https://github.com/ros-controls/ros2_control/issues/761>`_)
* [Interfaces] Improved ```get_name()``` method of hardware interfaces #api-breaking (`#737 <https://github.com/ros-controls/ros2_control/issues/737>`_)
* Update maintainers of packages (`#753 <https://github.com/ros-controls/ros2_control/issues/753>`_)
* Fix test dependency for chainable test (`#751 <https://github.com/ros-controls/ros2_control/issues/751>`_)
* Remove ament autolint (`#749 <https://github.com/ros-controls/ros2_control/issues/749>`_)
* Full functionality of chainable controllers in controller manager (`#667 <https://github.com/ros-controls/ros2_control/issues/667>`_)
  * auto-switching of chained mode in controllers
  * interface-matching approach for managing chaining controllers
* Fixup spanwer and unspawner tests. It changes spawner a bit to handle interupts internally. (`#745 <https://github.com/ros-controls/ros2_control/issues/745>`_)
* Add missing field to initializer lists in tests (`#746 <https://github.com/ros-controls/ros2_control/issues/746>`_)
* Small but useful output update on controller manager. (`#741 <https://github.com/ros-controls/ros2_control/issues/741>`_)
* Fixed period passed to hardware components always 0 (`#738 <https://github.com/ros-controls/ros2_control/issues/738>`_)
* Contributors: Bence Magyar, Denis Štogl, Maciej Bednarczyk, Lucas Schulze

2.10.0 (2022-06-18)
-------------------
* Make RHEL CI happy! (`#730 <https://github.com/ros-controls/ros2_control/issues/730>`_)
* CMakeLists cleanup (`#733 <https://github.com/ros-controls/ros2_control/issues/733>`_)
* Update to clang format 12 (`#731 <https://github.com/ros-controls/ros2_control/issues/731>`_)
* Contributors: Andy Zelenak, Bence Magyar, Márk Szitanics

2.9.0 (2022-05-19)
------------------
* Adding base class for chained controllers: `ChainedControllersInterface` (`#663 <https://github.com/ros-controls/ros2_control/issues/663>`_)
  * Extending ControllerInterface with methods for chainable controllers.
  * Switching to chained_mode is only forbidden if controller is active.
  * Default implementation for 'on_set_chained_mode' method.
  * Use two internal methods instead of 'update' directly on chained controllers.
* Add ControllerInterfaceBase class with methods for chainable controller (`#717 <https://github.com/ros-controls/ros2_control/issues/717>`_)
* Contributors: Denis Štogl

2.8.0 (2022-05-13)
------------------
* Pass time and period to read() and write() (`#715 <https://github.com/ros-controls/ros2_control/issues/715>`_)
* Contributors: Bence Magyar

2.7.0 (2022-04-29)
------------------
* Update ControllerManager documenation describing some concepts (`#677 <https://github.com/ros-controls/ros2_control/issues/677>`_)
* Make node private in ControllerInterface (`#699 <https://github.com/ros-controls/ros2_control/issues/699>`_)
* Contributors: Chen Bainian, Denis Štogl, Jack Center, Bence Magyar

2.6.0 (2022-04-20)
------------------
* Add controller_manager_msgs dependency to test_hardware_management_srvs (`#702 <https://github.com/ros-controls/ros2_control/issues/702>`_)
* Remove unused variable from the test (`#700 <https://github.com/ros-controls/ros2_control/issues/700>`_)
* Enable namespaces for controllers. (`#693 <https://github.com/ros-controls/ros2_control/issues/693>`_)
* Spawner waits for services (`#683 <https://github.com/ros-controls/ros2_control/issues/683>`_)
* Contributors: Denis Štogl, Rufus Wong, Tyler Weaver

2.5.0 (2022-03-25)
------------------
* Make ControllerManager tests more flexible and reusable for different scenarios. Use more parameterized tests regarding strictness. (`#661 <https://github.com/ros-controls/ros2_control/issues/661>`_)
* Use lifecycle nodes in controllers again (`#538 <https://github.com/ros-controls/ros2_control/issues/538>`_)
  * Add lifecycle nodes
  * Add custom 'configure' to controller interface to get 'update_rate' parameter.
  * Disable external interfaces of LifecycleNode.
* Small fixes in controller manager tests. (`#660 <https://github.com/ros-controls/ros2_control/issues/660>`_)
* Enable controller manager services to control hardware lifecycle #abi-breaking (`#637 <https://github.com/ros-controls/ros2_control/issues/637>`_)
  * Implement CM services for hardware lifecycle management.
  * Added default behavior to activate all controller and added description of CM parameters.
* Contributors: Denis Štogl, Vatan Aksoy Tezer, Bence Magyar

2.4.0 (2022-02-23)
------------------
* Fixes of issue with seg-fault when checking interfaces on unconfigured controllers. (`#580 <https://github.com/ros-controls/ros2_control/issues/580>`_)
* Update CM service QoS so that we don't lose service calls when using many controllers. (`#643 <https://github.com/ros-controls/ros2_control/issues/643>`_)
* Contributors: Denis Štogl, Bence Magyar

2.3.0 (2022-02-18)
------------------
* added a fixed control period to loop (`#647 <https://github.com/ros-controls/ros2_control/issues/647>`_)
* install spawner/unspawner using console_script entrypoint (`#607 <https://github.com/ros-controls/ros2_control/issues/607>`_)
* Add BEST_EFFORT in the controller switch tests. (`#582 <https://github.com/ros-controls/ros2_control/issues/582>`_)
* Resolve unused parameter warnings (`#636 <https://github.com/ros-controls/ros2_control/issues/636>`_)
* Contributors: Bence Magyar, Denis Štogl, Jack Center, Melvin Wang, Xi-Huang

2.2.0 (2022-01-24)
------------------
* Resource Manager API changes for hardware lifecycle #api-breaking #abi-breaking (`#589 <https://github.com/ros-controls/ros2_control/issues/589>`_)
  * Towards selective starting and stoping of hardware components. Cleaning and renaming.
  * Move Lifecycle of hardware component to the bottom for better overview.
  * Use the same nomenclature as for controllers. 'start' -> 'activate'; 'stop' -> 'deactivate'
  * Add selective starting and stopping of hardware resources.
  Add HardwareComponentInfo structure in resource manager.
  Use constants for HW parameters in tests of resource_manager.
  Add list hardware components in CM to get details about them and check their status.
  Use clear name for 'guard' and move release cmd itfs for better readability.
  RM: Add lock for accesing maps with stored interfaces.
  Separate hardware components-related services after controllers-related services.
  Add service for activate/deactive hardware components.
  Add activation and deactivation through ResourceStorage. This helps to manage available command interfaces.
  * Use lifecycle_msgs/State in ListHardwareCompoents for state representation.
  * Simplify repeatable code in methods.
  * Add HW shutdown structure into ResouceManager.
  * Fill out service callback in CM and add parameter for auto-configure.
  * Move claimed_command_itf_map to ResourceStorage from ResourceManager.
  * Do not automatically configure hardware in RM.
  * Lifecycle and claiming in Resource Manager is working.
  * Extend controller manager to support HW lifecycle.
  * Add also available and claimed status into list components service output.
  * Add SetHardwareComponentState service.
  * Make all output in services debug-output.
  * Remove specific services for hardware lifecycle management and leave only 'set_hardware_component_state' service.
  * Make init_resource_manager less stateful.
  * Keep old api to start/activate all components per default.
  * Remove 'moving'/'non-moving' interface-handling.
  * Remove obsolete 'import_components' methods without hardware info and fix post_initialization test.
  Co-authored-by: Bence Magyar <bence.magyar.robotics@gmail.com>
* Contributors: Denis Štogl

2.1.0 (2022-01-11)
------------------

2.0.0 (2021-12-29)
------------------
* Add service-skeletons for controlling hardware lifecycle. (`#585 <https://github.com/ros-controls/ros2_control/issues/585>`_)
* fix get_update_rate visibility in windows (`#586 <https://github.com/ros-controls/ros2_control/issues/586>`_)
* Make output of not available controller nicer and make it informational. (`#577 <https://github.com/ros-controls/ros2_control/issues/577>`_)
* Contributors: Denis Štogl, Melvin Wang

1.2.0 (2021-11-05)
------------------

1.1.0 (2021-10-25)
------------------
* feat: add colored output into spawner.py (`#560 <https://github.com/ros-controls/ros2_control/issues/560>`_)
* Added timeout argument for service_caller timeout (`#552 <https://github.com/ros-controls/ros2_control/issues/552>`_)
* controller_manager: Use command_interface_configuration for the claimed interfaces when calling list_controllers (`#544 <https://github.com/ros-controls/ros2_control/issues/544>`_)
* Clean up test_load_controller (`#532 <https://github.com/ros-controls/ros2_control/issues/532>`_)
* Contributors: Jack Center, Jafar Abdi, Michael, Nour Saeed

1.0.0 (2021-09-29)
------------------
* Use ControllerManager node clock for control loop timepoints (`#542 <https://github.com/ros-controls/ros2_control/issues/542>`_)
* Per controller update rate(`#513 <https://github.com/ros-controls/ros2_control/issues/513>`_)
* added dt to controller interface and controller manager `#438 <https://github.com/ros-controls/ros2_control/issues/438>`_ (`#520 <https://github.com/ros-controls/ros2_control/issues/520>`_)
* Update nomenclature in CM for better code and output understanding (`#517 <https://github.com/ros-controls/ros2_control/issues/517>`_)
* Methods controlling the lifecycle of controllers all have on\_ prefix
* Controller Manager should not crash when trying to start finalized or unconfigured controller (`#461 <https://github.com/ros-controls/ros2_control/issues/461>`_)
* Fix deprecation warning from rclcpp::Duration (`#511 <https://github.com/ros-controls/ros2_control/issues/511>`_)
* Remove BOOST compiler definitions for pluginlib from CMakeLists (`#514 <https://github.com/ros-controls/ros2_control/issues/514>`_)
* Do not manually set C++ version to 14 (`#516 <https://github.com/ros-controls/ros2_control/issues/516>`_)
* Refactor INSTANTIATE_TEST_CASE_P -> INSTANTIATE_TEST_SUITE_P (`#515 <https://github.com/ros-controls/ros2_control/issues/515>`_)
  Also removed the duplicated format & compiler fixes as on Galactic this shouldn't be an issue
* rename get_current_state() to get_state() (`#512 <https://github.com/ros-controls/ros2_control/issues/512>`_)
* Fix spawner tests (`#509 <https://github.com/ros-controls/ros2_control/issues/509>`_)
* Removed deprecated CLI verbs (`#420 <https://github.com/ros-controls/ros2_control/issues/420>`_)
* Remove extensions from executable nodes (`#453 <https://github.com/ros-controls/ros2_control/issues/453>`_)
* Contributors: Bence Magyar, Denis Štogl, Dmitri Ignakov, Joseph Schornak, Márk Szitanics, Tim Clephas, bailaC, Mathias Aarbo

0.8.0 (2021-08-28)
------------------
* Use clang format as code formatter (`#491 <https://github.com/ros-controls/ros2_control/issues/491>`_)
* Use example urdf from the test_assests package. (`#495 <https://github.com/ros-controls/ros2_control/issues/495>`_)
* Separate controller manager test cases (`#476 <https://github.com/ros-controls/ros2_control/issues/476>`_)
* Add Controller Manager docs (`#467 <https://github.com/ros-controls/ros2_control/issues/467>`_)
* sort interfaces in resource manager (`#483 <https://github.com/ros-controls/ros2_control/issues/483>`_)
* Add pre-commit setup. (`#473 <https://github.com/ros-controls/ros2_control/issues/473>`_)
* Make controller_manager set controller's use_sim_time param when use_sim_time=True (`#468 <https://github.com/ros-controls/ros2_control/issues/468>`_)
  * potential solution to controller_manager use_sim_time sharing issue
  * removed debug print statements
  * added INFO message to warn user that use_sim_time is being set automatically
* Add load-only option into controller spawner (`#427 <https://github.com/ros-controls/ros2_control/issues/427>`_)
* Fixes for windows (`#443 <https://github.com/ros-controls/ros2_control/issues/443>`_)
  * Fix building on windows
  * Fix MSVC linker error when building tests
  * Fix hang when loading controller on windows
  * Use better log for configuring controller
  * Be consistent with visibility control
  * Use try_lock throw exception on failure
* Add an argument to define controller manager timeout (`#444 <https://github.com/ros-controls/ros2_control/issues/444>`_)
* Contributors: Akash, Bence Magyar, Darko Lukić, Denis Štogl, Karsten Knese, Simon Honigmann

0.7.1 (2021-06-15)
------------------
* Use namespace in controller_manager (`#435 <https://github.com/ros-controls/ros2_control/issues/435>`_)
* Contributors: Jonatan Olofsson

0.7.0 (2021-06-06)
------------------

0.6.1 (2021-05-31)
------------------
* Add missing dependency on controller_manager_msgs (`#426 <https://github.com/ros-controls/ros2_control/issues/426>`_)
* Contributors: Denis Štogl

0.6.0 (2021-05-23)
------------------
* List controller claimed interfaces (`#407 <https://github.com/ros-controls/ros2_control/issues/407>`_)
  * List controllers now also shows the claimed interfaces
  * Fixed tests that perform switches
  Successfull controller switches require more than one call to update()
  in order to update the controller list
  * Can now set the command interface configuration
  * Added checks for the claimed interfaces
* Contributors: Jordan Palacios

0.5.0 (2021-05-03)
------------------
* Make controller manager update rate optional (`#404 <https://github.com/ros-controls/ros2_control/issues/404>`_)
* Bump `wait_for_service` timeout to 10 seconds (`#403 <https://github.com/ros-controls/ros2_control/issues/403>`_)
* introduce --stopped for spawner (`#402 <https://github.com/ros-controls/ros2_control/issues/402>`_)
* hardware_interface mode switching using prepareSwitch doSwitch approach (`#348 <https://github.com/ros-controls/ros2_control/issues/348>`_)
* Avoid std::stringstream (`#391 <https://github.com/ros-controls/ros2_control/issues/391>`_)
* avoid deprecations (`#393 <https://github.com/ros-controls/ros2_control/issues/393>`_)
* Use RCLCPP_DEBUG_STREAM for char * (`#389 <https://github.com/ros-controls/ros2_control/issues/389>`_)
* Check controller_interface::init return value when loading (`#386 <https://github.com/ros-controls/ros2_control/issues/386>`_)
* Do not throw when controller type is not found, return nullptr instead (`#387 <https://github.com/ros-controls/ros2_control/issues/387>`_)
* Contributors: Auguste Bourgois, Karsten Knese, Matt Reynolds, Tyler Weaver, Mathias Hauan Arbo, Bence Magyar

0.4.0 (2021-04-07)
------------------
* Fix deprecation warnings: SUCCESS -> OK (`#375 <https://github.com/ros-controls/ros2_control/issues/375>`_)
* Don't use FileType for param-file (`#351 <https://github.com/ros-controls/ros2_control/issues/351>`_)
* Remodel ros2controlcli, refactor spawner/unspawner and fix test (`#349 <https://github.com/ros-controls/ros2_control/issues/349>`_)
* Add spawner and unspawner scripts (`#310 <https://github.com/ros-controls/ros2_control/issues/310>`_)
* Contributors: Bence Magyar, Jordan Palacios, Karsten Knese, Victor Lopez

0.3.0 (2021-03-21)
------------------
* release_interfaces when stopping controller (`#343 <https://github.com/ros-controls/ros2_control/issues/343>`_)
  * release_interfaces when stopping controller
  * Moved release_interfaces after deactivate
  * First attempt at test_release_interfaces
  * Switched to std::async with cm\_->update
* Capatalized error message and put the controllers name and resource name inside quote (`#338 <https://github.com/ros-controls/ros2_control/issues/338>`_)
* Contributors: mahaarbo, suab321321

0.2.1 (2021-03-02)
------------------

0.2.0 (2021-02-26)
------------------
* Add "Fake" components for simple integration of framework (`#323 <https://github.com/ros-controls/ros2_control/issues/323>`_)
* Contributors: Denis Štogl

0.1.6 (2021-02-05)
------------------

0.1.5 (2021-02-04)
------------------

0.1.4 (2021-02-03)
------------------
* fix float conversion warning (`#312 <https://github.com/ros-controls/ros2_control/issues/312>`_)
* update doxygen style according to ros2 core standard (`#300 <https://github.com/ros-controls/ros2_control/issues/300>`_)
* Capitalized messages in controller_manager.cpp upto line669 (`#285 <https://github.com/ros-controls/ros2_control/issues/285>`_)
* Sleep accurate duration on ros2_control_node (`#302 <https://github.com/ros-controls/ros2_control/issues/302>`_)
* Contributors: Achinta-Choudhury, João Victor Torres Borges, Karsten Knese, Yutaka Kondo

0.1.3 (2021-01-21)
------------------
* Fix building on macOS with clang (`#292 <https://github.com/ros-controls/ros2_control/issues/292>`_)
ail.com>
* Contributors: Karsten Knese

0.1.2 (2021-01-06)
------------------
* Fix update rate issues by working around MutliThreadedExecutor (`#275 <https://github.com/ros-controls/ros2_control/issues/275>`_)
  * Fix update rate issues by working around MutliThreadedExecutor
  Currently the MutliThreadedExecutor performance is very bad. This leads
  to controllers not meeting their update rate. This PR is a temporary
  workaround for these issues.
  The current approach uses a `rclcpp` timer to execute the control loop.
  When used in combination with the `MutliThreadedExecutor`, the timers
  are not execute at their target frequency. I've converted the control
  loop to a while loop on a separate thread that uses `nanosleep` to
  execute the correct update rate. This means that `rclcpp` is not
  involved in the execution and leads to much better performance.
  * Address review comments by rewriting several comments
* Contributors: Ramon Wijnands

0.1.1 (2020-12-23)
------------------

0.1.0 (2020-12-22)
------------------
* Add configure controller service (`#272 <https://github.com/ros-controls/ros2_control/issues/272>`_)
* Remove lifecycle node (`#261 <https://github.com/ros-controls/ros2_control/issues/261>`_)
* Added starting of resources into CM and RM (`#240 <https://github.com/ros-controls/ros2_control/issues/240>`_)
* Use resource manager (`#236 <https://github.com/ros-controls/ros2_control/issues/236>`_)
* Remove pluginlib warnings on reload test (`#237 <https://github.com/ros-controls/ros2_control/issues/237>`_)
* resource loaning (`#224 <https://github.com/ros-controls/ros2_control/issues/224>`_)
* Allocate memory for components and handles (`#207 <https://github.com/ros-controls/ros2_control/issues/207>`_)
* Add controller manager services (`#139 <https://github.com/ros-controls/ros2_control/issues/139>`_)
* Change Hardware return type to enum class (`#114 <https://github.com/ros-controls/ros2_control/issues/114>`_)
* Use rclcpp::Executor instead of rclcpp::executor::Executor(deprecated) (`#82 <https://github.com/ros-controls/ros2_control/issues/82>`_)
* Replace RCUTILS\_ with RCLCPP\_ for logging (`#62 <https://github.com/ros-controls/ros2_control/issues/62>`_)
* dont include pluginlib header in controller manager header (`#63 <https://github.com/ros-controls/ros2_control/issues/63>`_)
* export controller_interface (`#58 <https://github.com/ros-controls/ros2_control/issues/58>`_)
* Use pluginlib instead of class_loader for loading controllers (`#41 <https://github.com/ros-controls/ros2_control/issues/41>`_)
* import controller_manager
* Contributors: Bence Magyar, Denis Štogl, Jafar Abdi, Jordan Palacios, Karsten Knese, Parth Chopra, Victor Lopez
