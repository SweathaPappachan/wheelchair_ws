# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_grid_pub_sub
# Build directory: /home/sweatha/wheelchair_ws/build/nav_grid_pub_sub
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_nav_grid_pub_sub_roslint_package "/home/sweatha/wheelchair_ws/build/nav_grid_pub_sub/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/nav_grid_pub_sub/test_results/nav_grid_pub_sub/roslint-nav_grid_pub_sub.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/nav_grid_pub_sub" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/nav_grid_pub_sub/test_results/nav_grid_pub_sub/roslint-nav_grid_pub_sub.xml make roslint_nav_grid_pub_sub")
set_tests_properties(_ctest_nav_grid_pub_sub_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_grid_pub_sub/CMakeLists.txt;43;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_grid_pub_sub/CMakeLists.txt;0;")
subdirs("gtest")
