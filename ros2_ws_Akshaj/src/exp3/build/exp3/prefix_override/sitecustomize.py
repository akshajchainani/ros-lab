import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/akshaj/Downloads/ros2_ws_AKSHAJ/ros2_ws_Akshaj/src/exp3/install/exp3'
