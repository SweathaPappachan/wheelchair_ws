# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/global_planner_tests
# Build directory: /home/sweatha/wheelchair_ws/build/global_planner_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_global_planner_tests_roslint_package "/home/sweatha/wheelchair_ws/build/global_planner_tests/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/global_planner_tests/test_results/global_planner_tests/roslint-global_planner_tests.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/global_planner_tests" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/global_planner_tests/test_results/global_planner_tests/roslint-global_planner_tests.xml make roslint_global_planner_tests")
set_tests_properties(_ctest_global_planner_tests_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/global_planner_tests/CMakeLists.txt;34;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/global_planner_tests/CMakeLists.txt;0;")
subdirs("gtest")
