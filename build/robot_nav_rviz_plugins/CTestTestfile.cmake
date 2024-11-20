# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_rviz_plugins
# Build directory: /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_robot_nav_rviz_plugins_roslint_package "/home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins/test_results/robot_nav_rviz_plugins/roslint-robot_nav_rviz_plugins.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins/test_results/robot_nav_rviz_plugins/roslint-robot_nav_rviz_plugins.xml make roslint_robot_nav_rviz_plugins")
set_tests_properties(_ctest_robot_nav_rviz_plugins_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_rviz_plugins/CMakeLists.txt;86;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_rviz_plugins/CMakeLists.txt;0;")
subdirs("gtest")
