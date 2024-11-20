# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/locomove_base
# Build directory: /home/sweatha/wheelchair_ws/build/locomove_base
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_locomove_base_roslint_package "/home/sweatha/wheelchair_ws/build/locomove_base/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/locomove_base/test_results/locomove_base/roslint-locomove_base.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/locomove_base" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/locomove_base/test_results/locomove_base/roslint-locomove_base.xml make roslint_locomove_base")
set_tests_properties(_ctest_locomove_base_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/locomove_base/CMakeLists.txt;24;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/locomove_base/CMakeLists.txt;0;")
subdirs("gtest")
