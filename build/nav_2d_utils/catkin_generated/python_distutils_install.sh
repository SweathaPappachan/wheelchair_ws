#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_2d_utils"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/sweatha/wheelchair_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/sweatha/wheelchair_ws/install/lib/python3/dist-packages:/home/sweatha/wheelchair_ws/build/nav_2d_utils/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/sweatha/wheelchair_ws/build/nav_2d_utils" \
    "/usr/bin/python3" \
    "/home/sweatha/wheelchair_ws/src/dependencies/robot_navigation/nav_2d_utils/setup.py" \
     \
    build --build-base "/home/sweatha/wheelchair_ws/build/nav_2d_utils" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/sweatha/wheelchair_ws/install" --install-scripts="/home/sweatha/wheelchair_ws/install/bin"
