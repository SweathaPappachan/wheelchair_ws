# CMake generated Testfile for 
# Source directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_core2
# Build directory: /home/sweatha/wheelchair_ws/build/nav_core2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_nav_core2_roslint_package "/home/sweatha/wheelchair_ws/build/nav_core2/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/nav_core2/test_results/nav_core2/roslint-nav_core2.xml" "--working-dir" "/home/sweatha/wheelchair_ws/build/nav_core2" "--return-code" "/opt/ros/noetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/sweatha/wheelchair_ws/build/nav_core2/test_results/nav_core2/roslint-nav_core2.xml make roslint_nav_core2")
set_tests_properties(_ctest_nav_core2_roslint_package PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/roslint/cmake/roslint-extras.cmake;67;catkin_run_tests_target;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_core2/CMakeLists.txt;27;roslint_add_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_core2/CMakeLists.txt;0;")
add_test(_ctest_nav_core2_gtest_bounds_test "/home/sweatha/wheelchair_ws/build/nav_core2/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/nav_core2/test_results/nav_core2/gtest-bounds_test.xml" "--return-code" "/home/sweatha/wheelchair_ws/devel/.private/nav_core2/lib/nav_core2/bounds_test --gtest_output=xml:/home/sweatha/wheelchair_ws/build/nav_core2/test_results/nav_core2/gtest-bounds_test.xml")
set_tests_properties(_ctest_nav_core2_gtest_bounds_test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_core2/CMakeLists.txt;29;catkin_add_gtest;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_core2/CMakeLists.txt;0;")
add_test(_ctest_nav_core2_gtest_exception_test "/home/sweatha/wheelchair_ws/build/nav_core2/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/sweatha/wheelchair_ws/build/nav_core2/test_results/nav_core2/gtest-exception_test.xml" "--return-code" "/home/sweatha/wheelchair_ws/devel/.private/nav_core2/lib/nav_core2/exception_test --gtest_output=xml:/home/sweatha/wheelchair_ws/build/nav_core2/test_results/nav_core2/gtest-exception_test.xml")
set_tests_properties(_ctest_nav_core2_gtest_exception_test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_core2/CMakeLists.txt;30;catkin_add_gtest;/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_core2/CMakeLists.txt;0;")
subdirs("gtest")