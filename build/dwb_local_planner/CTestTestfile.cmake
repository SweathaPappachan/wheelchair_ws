# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dwb_local_planner
# Build directory: /home/sweatha/wheelchair_ws/build/dwb_local_planner
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_dwb_local_planner_roslint_package "/home/sweatha/wheelchair_ws/build/dwb_local_planner/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/dwb_local_planner/test_results/dwb_local_planner/roslint-dwb_local_planner.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/dwb_local_planner" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/dwb_local_planner/test_results/dwb_local_planner/roslint-dwb_local_planner.xml make roslint_dwb_local_planner")
set_tests_properties(_ctest_dwb_local_planner_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dwb_local_planner/CMakeLists.txt;57;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dwb_local_planner/CMakeLists.txt;0;")
add_test(_ctest_dwb_local_planner_gtest_utils_test "/home/sweatha/wheelchair_ws/build/dwb_local_planner/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/dwb_local_planner/test_results/dwb_local_planner/gtest-utils_test.xml" "--return-code" "/home/sweatha/wheelchair_ws/devel/.private/dwb_local_planner/lib/dwb_local_planner/utils_test --gtest_output=xml:/home/sweatha/wheelchair_ws/build/dwb_local_planner/test_results/dwb_local_planner/gtest-utils_test.xml")
set_tests_properties(_ctest_dwb_local_planner_gtest_utils_test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dwb_local_planner/CMakeLists.txt;59;catkin_add_gtest;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dwb_local_planner/CMakeLists.txt;0;")
subdirs("gtest")
