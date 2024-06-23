
# ArduPilot with Gazebo and MAVProxy Setup

This guide provides steps to set up and run ArduPilot with Gazebo and MAVProxy in a ROS 2 workspace, including acquiring high-resolution satellite images using Blender and BlenderGIS.

## Prerequisites

Ensure you have the following installed:
- Ubuntu 22.04
- ROS 2 Humble
- Gazebo Garden
- MAVProxy
- ArduPilot SITL
- Blender

## Setup Instructions

### 1. Install ROS 2 Humble

Follow the [ROS 2 Humble installation guide](https://docs.ros.org/en/humble/Installation.html).

### 2. Create and Build ROS 2 Workspace

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
colcon build
source install/setup.bash
echo "source ~/ros2_ws/install/setup.bash" >> ~/.bashrc
```

### 3. Install Dependencies

```bash
sudo apt update
sudo apt install python3-colcon-common-extensions
sudo apt install python3-vcstool
```

### 4. Setup Environment Variables

```bash
echo "export ROS_DOMAIN_ID=22" >> ~/.bashrc
echo "export ROS_LOCALHOST_ONLY=1" >> ~/.bashrc
source ~/.bashrc
```

### 5. Install Build Dependencies for Ardupilot
Follow the instructions from [Ardupilot_DDS](https://github.com/ArduPilot/ardupilot/tree/master/libraries/AP_DDS#installing-build-dependencieshttps://www.blender.org/download/).
```bash
gedit ~/.bashrc
export PATH=$PATH:~/Micro-XRCE-DDS-Gen/scripts
source ~/.bashrc
microxrceddsgen -version
```

### 6. Setup Ardupilot

```bash
sudo apt-get update
sudo apt-get install git
sudo apt-get install gitk git-gui
sudo apt-get install gcc-arm-none-eabi

git clone https://github.com/ArduPilot/ardupilo...
cd ardupilot
git status
./waf distclean
./waf distclean
./waf configure --board MatekF405-Wing
./waf plane
```
For more details follow [Setting up build environment](https://ardupilot.org/dev/docs/building-setup-linux.html#building-setup-linux)

### 7. Install Ros2
Follow the instructions from [Ros2 for Ardupilot](https://ardupilot.org/dev/docs/ros2.html#ros2). Avoid the steps you followed earlier.

### 8. Install SITL
```bash
cd ~/ardupilot
git pull
Tools/environment_install/install-prereqs-ubuntu.sh -y
./waf clean
./waf configure --board sitl
./waf copter -v
```
For more info follow [SITL installation](https://ardupilot.org/dev/docs/setting-up-sitl-on-linux.html)


### 9. Install MAVProxy

```bash
sudo pip3 install MAVProxy
echo "export PATH=\$PATH:~/.local/bin" >> ~/.bashrc
source ~/.bashrc
mavproxy.py --version
```

### 10. Ros2 with SITL
Follow the instructions from [Ros2 with SITL](https://ardupilot.org/dev/docs/ros2-sitl.html#ros2-sitl)

### 11. Setup Gazebo garden

Install Gazebo Garden following the [Gazebo installation guide](https://gazebosim.org/docs/garden/install).

Add Gazebo environment variables:

```bash
echo "export GZ_VERSION=garden" >> ~/.bashrc
echo "export GAZEBO_MODEL_PATH=~/ros2_ws/src/ardupilot_gazebo/models:\$GAZEBO_MODEL_PATH" >> ~/.bashrc
echo "export GAZEBO_PLUGIN_PATH=~/ros2_ws/src/ardupilot_gazebo/build:\$GAZEBO_PLUGIN_PATH" >> ~/.bashrc
echo "export GAZEBO_RESOURCE_PATH=~/ros2_ws/src/ardupilot_gazebo/worlds:\$GAZEBO_RESOURCE_PATH" >> ~/.bashrc
source ~/.bashrc
```
### 12. Setup Ros2 with SITL in Gazebo gaeden
Follow the instructions from [ROS 2 with Gazebo](https://ardupilot.org/dev/docs/ros2-gazebo.html)
```bash
gedit ~/.bashrc
export GZ_VERSION=garden
source ~/.bashrc
```

### 13. Load Satellite Image in Gazebo

#### 13.1 Install Blender

Download and install Blender from [Blender.org](https://www.blender.org/download/).

#### 13.2 Install BlenderGIS Addon

1. Open Blender and go to `Edit > Preferences > Add-ons`.
2. Click `Install` and select the downloaded BlenderGIS ZIP file from [BlenderGIS GitHub](https://github.com/domlysz/BlenderGIS).
3. Enable the BlenderGIS addon.

#### 13.3 Get Satellite Image

1. In Blender, go to `GIS > Web geodata > Basemap`.
2. Choose a basemap provider and zoom to the area of interest.
3. Use `GIS > Web geodata > Get view as image` to save the satellite image as a `.tif` file.
4. Save the `.tif` file in `~/ros2_ws/src/ardupilot_gazebo/models/runway/materials/textures`.

#### 13.4 Update Model in Gazebo

1. Edit `~/ros2_ws/src/ardupilot_gazebo/models/runway/model.sdf`.
2. Update the texture reference to the new `.tif` file.

#### 13.5 Adjust Camera Pose

1. Edit the pose values in `~/ros2_ws/src/ardupilot_gazebo/models/gimbal_small_2d/model.sdf` to adjust the camera orientation.

### 14. Runway Environment Launch

Open a new terminal and start the runway environment:

```bash
cd ~/ros2_ws
source install/setup.bash
ros2 launch ardupilot_gz_bringup iris_runway.launch.py
```

Open another terminal and start MAVProxy:

```bash
mavproxy.py --console --map --aircraft test --master=tcp:127.0.0.1:14550
```

### 15. Control the Drone with MAVProxy

In the terminal where MAVProxy is running, use the following commands:

```bash
arm throttle
takeoff 10
velocity 1 0 0
```

### 16. Get GPS Data from ROS 2 Topic

To get GPS data from the ROS 2 topic, follow these steps:

1. List the available ROS 2 topics:
   You can find gps, imu and other details

    ```bash
    ros2 topic list
    ```

3. Identify the topic that provides GPS data. It is usually named something like `/navsat`.

4. Echo the GPS data from the identified topic:

    ```bash
    ros2 topic echo /navsat
    ```

This command will display the GPS data being published on the `/navsat` topic, which includes latitude, longitude, altitude, and other relevant information.

## References

- [ROS 2 Humble Installation Guide](https://docs.ros.org/en/humble/Installation.html)
- [Setting up SITL on Linux](https://ardupilot.org/dev/docs/setting-up-sitl-on-linux.html)
- [Gazebo Garden Installation](https://gazebosim.org/docs/garden/install)
- [BlenderGIS on GitHub](https://github.com/domlysz/BlenderGIS)
- [AP_DDS Build Dependencies](https://github.com/ArduPilot/ardupilot/tree/master/libraries/AP_DDS#installing-build-dependencies)
- [ROS 2 with SITL Guide](https://ardupilot.org/dev/docs/ros2-sitl.html)
- [ROS 2 and Gazebo Integration](https://ardupilot.org/dev/docs/ros2-gazebo.html)
- [Video Tutorial](https://www.youtube.com/watch?v=2BhyKyzKAbM)

