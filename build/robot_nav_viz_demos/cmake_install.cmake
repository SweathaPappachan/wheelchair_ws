# Install script for directory: /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sweatha/wheelchair_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/sweatha/wheelchair_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/sweatha/wheelchair_ws/install" TYPE PROGRAM FILES "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/sweatha/wheelchair_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/sweatha/wheelchair_ws/install" TYPE PROGRAM FILES "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/sweatha/wheelchair_ws/install/setup.bash;/home/sweatha/wheelchair_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/sweatha/wheelchair_ws/install" TYPE FILE FILES
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/setup.bash"
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/sweatha/wheelchair_ws/install/setup.sh;/home/sweatha/wheelchair_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/sweatha/wheelchair_ws/install" TYPE FILE FILES
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/setup.sh"
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/sweatha/wheelchair_ws/install/setup.zsh;/home/sweatha/wheelchair_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/sweatha/wheelchair_ws/install" TYPE FILE FILES
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/setup.zsh"
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/sweatha/wheelchair_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/sweatha/wheelchair_ws/install" TYPE FILE FILES "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/robot_nav_viz_demos.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_nav_viz_demos/cmake" TYPE FILE FILES
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/robot_nav_viz_demosConfig.cmake"
    "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/catkin_generated/installspace/robot_nav_viz_demosConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_nav_viz_demos" TYPE FILE FILES "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdemo_palettes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdemo_palettes.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdemo_palettes.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_viz_demos/lib/libdemo_palettes.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdemo_palettes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdemo_palettes.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdemo_palettes.so"
         OLD_RPATH "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_rviz_plugins/lib:/home/sweatha/wheelchair_ws/devel/.private/color_util/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_pub_sub/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_iterators/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_2d_utils/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_core2/lib:/opt/ros/noetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdemo_palettes.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libspectrum_display.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libspectrum_display.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libspectrum_display.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_viz_demos/lib/libspectrum_display.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libspectrum_display.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libspectrum_display.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libspectrum_display.so"
         OLD_RPATH "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_rviz_plugins/lib:/home/sweatha/wheelchair_ws/devel/.private/color_util/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_pub_sub/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_iterators/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_2d_utils/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_core2/lib:/opt/ros/noetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libspectrum_display.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_nav_viz_demos" TYPE FILE FILES
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/robot_nav_rviz_plugins.xml"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/rviz_plugins.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_nav_viz_demos/data" TYPE FILE FILES
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/data/demo_grids.bag"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/data/demo_grids.rviz"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/data/demo_polygons.rviz"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/data/named_colors_demo.rviz"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/data/spectrum.rviz"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/pong" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/pong")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/pong"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos" TYPE EXECUTABLE FILES "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_viz_demos/lib/robot_nav_viz_demos/pong")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/pong" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/pong")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/pong"
         OLD_RPATH "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_rviz_plugins/lib:/home/sweatha/wheelchair_ws/devel/.private/color_util/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_pub_sub/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_iterators/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_2d_utils/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_core2/lib:/opt/ros/noetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/pong")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/named_colors_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/named_colors_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/named_colors_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos" TYPE EXECUTABLE FILES "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_viz_demos/lib/robot_nav_viz_demos/named_colors_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/named_colors_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/named_colors_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/named_colors_demo"
         OLD_RPATH "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_rviz_plugins/lib:/home/sweatha/wheelchair_ws/devel/.private/color_util/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_pub_sub/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_iterators/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_2d_utils/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_core2/lib:/opt/ros/noetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/named_colors_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/polygon" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/polygon")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/polygon"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos" TYPE EXECUTABLE FILES "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_viz_demos/lib/robot_nav_viz_demos/polygon")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/polygon" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/polygon")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/polygon"
         OLD_RPATH "/home/sweatha/wheelchair_ws/devel/.private/robot_nav_rviz_plugins/lib:/home/sweatha/wheelchair_ws/devel/.private/color_util/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_pub_sub/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_grid_iterators/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_2d_utils/lib:/home/sweatha/wheelchair_ws/devel/.private/nav_core2/lib:/opt/ros/noetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_nav_viz_demos/polygon")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_nav_viz_demos/launch" TYPE FILE FILES
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/launch/grid_demo.launch"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/launch/named_colors_demo.launch"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/launch/polygons.launch"
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/launch/spectrum_demo.launch"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/robot_nav_viz_demos" TYPE DIRECTORY FILES "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_viz_demos/include/robot_nav_viz_demos/")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/sweatha/wheelchair_ws/build/robot_nav_viz_demos/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
