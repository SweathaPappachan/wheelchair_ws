# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_global_planner
# Build directory: /home/sweatha/wheelchair_ws/build/dlux_global_planner
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_dlux_global_planner_roslint_package "/home/sweatha/wheelchair_ws/build/dlux_global_planner/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/dlux_global_planner/test_results/dlux_global_planner/roslint-dlux_global_planner.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/dlux_global_planner" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/dlux_global_planner/test_results/dlux_global_planner/roslint-dlux_global_planner.xml make roslint_dlux_global_planner")
set_tests_properties(_ctest_dlux_global_planner_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_global_planner/CMakeLists.txt;48;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_global_planner/CMakeLists.txt;0;")
add_test(_ctest_dlux_global_planner_gtest_kernel_test "/home/sweatha/wheelchair_ws/build/dlux_global_planner/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/dlux_global_planner/test_results/dlux_global_planner/gtest-kernel_test.xml" "--return-code" "/home/sweatha/wheelchair_ws/devel/.private/dlux_global_planner/lib/dlux_global_planner/kernel_test --gtest_output=xml:/home/sweatha/wheelchair_ws/build/dlux_global_planner/test_results/dlux_global_planner/gtest-kernel_test.xml")
set_tests_properties(_ctest_dlux_global_planner_gtest_kernel_test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_global_planner/CMakeLists.txt;51;catkin_add_gtest;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_global_planner/CMakeLists.txt;0;")
subdirs("gtest")