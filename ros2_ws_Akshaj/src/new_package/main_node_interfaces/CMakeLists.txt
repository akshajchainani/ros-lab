cmake_minimum_required(VERSION 3.8)
project(new_code_py)  # Ensure package name is correct

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)  # Required for action interface

# Generate action interfaces
rosidl_generate_interfaces(main_node_interfaces  # Correct package name
  "action/Fibonacci.action"  # Ensure action file name has correct case
  DEPENDENCIES builtin_interfaces
)

ament_package()
