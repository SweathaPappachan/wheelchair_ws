# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_rviz_plugins

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins

# Utility rule file for basic_palettes_autogen.

# Include the progress variables for this target.
include CMakeFiles/basic_palettes_autogen.dir/progress.make

CMakeFiles/basic_palettes_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target basic_palettes"
	/usr/bin/cmake -E cmake_autogen /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins/CMakeFiles/basic_palettes_autogen.dir/AutogenInfo.json ""

basic_palettes_autogen: CMakeFiles/basic_palettes_autogen
basic_palettes_autogen: CMakeFiles/basic_palettes_autogen.dir/build.make

.PHONY : basic_palettes_autogen

# Rule to build all files generated by this target.
CMakeFiles/basic_palettes_autogen.dir/build: basic_palettes_autogen

.PHONY : CMakeFiles/basic_palettes_autogen.dir/build

CMakeFiles/basic_palettes_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/basic_palettes_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/basic_palettes_autogen.dir/clean

CMakeFiles/basic_palettes_autogen.dir/depend:
	cd /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_rviz_plugins /home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/robot_nav_tools/robot_nav_rviz_plugins /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins /home/sweatha/wheelchair_ws/build/robot_nav_rviz_plugins/CMakeFiles/basic_palettes_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/basic_palettes_autogen.dir/depend

