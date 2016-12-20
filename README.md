Installation instructions can be found on `INSTALL.md`.
Video example: `https://youtu.be/1hiX0f6UAew`

# Usage

Before start:

* Make sure VIVE is present as several `/dev/hidraw*` and you have access permissions.
* Make sure VIVE display is enabled as extended view.
* Libraries and Steam are present on the folders described by `INSTALL.md`.

To compile, create a new workspace, clone, compile and source the workspace:

    mkdir -p ~/vive_ws/src
    cd ~/vive_ws/src
    git clone https://github.com/robosavvy/vive_ros
    cd ..
    catkin_make
    source devel/setup.bash

Procedure:

1. Start a `roscore`
2. Launch the SteamVR's `vrserver` by launching the file: `roslaunch vive_ros server_vr.launch`
3. Launch the node: `roslaunch vive_ros vive.launch` (this console may need `export LD_LIBRARY_PATH=~/libraries/openvr/lib/linux64` to be done beforehand)
4. To close the node you can `Ctrl+C`. To close the vr server you have to kill the process. For convenience: `rosrun vive_ros close_servervr.sh`
