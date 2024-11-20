# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/rqt_dwb_plugin
# Build directory: /home/sweatha/wheelchair_ws/build/rqt_dwb_plugin
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rqt_dwb_plugin_roslint_package "/home/sweatha/wheelchair_ws/build/rqt_dwb_plugin/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/rqt_dwb_plugin/test_results/rqt_dwb_plugin/roslint-rqt_dwb_plugin.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/rqt_dwb_plugin" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/rqt_dwb_plugin/test_results/rqt_dwb_plugin/roslint-rqt_dwb_plugin.xml make roslint_rqt_dwb_plugin")
set_tests_properties(_ctest_rqt_dwb_plugin_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/rqt_dwb_plugin/CMakeLists.txt;12;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/rqt_dwb_plugin/CMakeLists.txt;0;")
subdirs("gtest")
