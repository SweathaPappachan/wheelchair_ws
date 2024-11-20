execute_process(COMMAND "/home/sweatha/wheelchair_ws/build/nav_2d_utils/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/sweatha/wheelchair_ws/build/nav_2d_utils/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
