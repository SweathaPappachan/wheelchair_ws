# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "angles;costmap_queue;dwb_local_planner;geometry_msgs;nav_2d_msgs;nav_2d_utils;nav_core2;nav_grid_iterators;pluginlib;roscpp;sensor_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ldwb_critics".split(';') if "-ldwb_critics" != "" else []
PROJECT_NAME = "dwb_critics"
PROJECT_SPACE_DIR = "/home/sweatha/wheelchair_ws/install"
PROJECT_VERSION = "0.3.0"