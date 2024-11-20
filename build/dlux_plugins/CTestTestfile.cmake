# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins
# Build directory: /home/sweatha/wheelchair_ws/build/dlux_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_dlux_plugins_rostest_test_planner_test.launch "/home/sweatha/wheelchair_ws/build/dlux_plugins/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/dlux_plugins/test_results/dlux_plugins/rostest-test_planner_test.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins --package=dlux_plugins --results-filename test_planner_test.xml --results-base-dir \"/home/sweatha/wheelchair_ws/build/dlux_plugins/test_results\" /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/test/planner_test.launch ")
set_tests_properties(_ctest_dlux_plugins_rostest_test_planner_test.launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/CMakeLists.txt;27;add_rostest_gtest;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/CMakeLists.txt;0;")
add_test(_ctest_dlux_plugins_rostest_test_global_oscillation_test.launch "/home/sweatha/wheelchair_ws/build/dlux_plugins/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/dlux_plugins/test_results/dlux_plugins/rostest-test_global_oscillation_test.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins --package=dlux_plugins --results-filename test_global_oscillation_test.xml --results-base-dir \"/home/sweatha/wheelchair_ws/build/dlux_plugins/test_results\" /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/test/global_oscillation_test.launch ")
set_tests_properties(_ctest_dlux_plugins_rostest_test_global_oscillation_test.launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/CMakeLists.txt;34;add_rostest_gtest;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/CMakeLists.txt;0;")
add_test(_ctest_dlux_plugins_roslint_package "/home/sweatha/wheelchair_ws/build/dlux_plugins/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/dlux_plugins/test_results/dlux_plugins/roslint-dlux_plugins.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/dlux_plugins" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/dlux_plugins/test_results/dlux_plugins/roslint-dlux_plugins.xml make roslint_dlux_plugins")
set_tests_properties(_ctest_dlux_plugins_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/CMakeLists.txt;39;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/dlux_plugins/CMakeLists.txt;0;")
subdirs("gtest")
