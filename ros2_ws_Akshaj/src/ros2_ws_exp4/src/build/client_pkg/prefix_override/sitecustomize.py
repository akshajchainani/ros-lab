import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/akshaj/Desktop/ros-lab-exp/ros-lab/ros2_ws_Akshaj/src/ros2_ws_exp4/src/install/client_pkg'
