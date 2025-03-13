cmake_minimum_required(VERSION 3.8)
project(experiment_interfaces)

# Compiler settings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Required dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rosidl_default_runtime REQUIRED)  # Added for runtime dependencies
find_package(geometry_msgs REQUIRED)  # Added if geometry_msgs is needed

# Interface generation
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/TurtleControl.srv"
  DEPENDENCIES geometry_msgs  # Remove if geometry_msgs is not required
)

# Testing configuration
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# Final package export
ament_package()

