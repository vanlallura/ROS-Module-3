cmake_minimum_required(VERSION 3.8)
project(ros_basic_lessons)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(custom_interfaces REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(turtlesim REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(pub_param  src/pub_param.cpp)
ament_target_dependencies(pub_param  rclcpp geometry_msgs)

add_executable(sub_param  src/sub_param.cpp)
ament_target_dependencies(sub_param  rclcpp geometry_msgs)

add_executable(srv_node1  src/service_node1.cpp)
ament_target_dependencies(srv_node1  rclcpp custom_interfaces)

add_executable(srv_node2  src/service_node2.cpp)
ament_target_dependencies(srv_node2  rclcpp custom_interfaces)

add_executable(pub_custom  src/pub_custom.cpp)
ament_target_dependencies(pub_custom  rclcpp custom_interfaces)

add_executable(sub_custom  src/sub_custom.cpp)
ament_target_dependencies(sub_custom  rclcpp custom_interfaces)

add_executable(turtle_sq_shape  src/move_turtle_square_shape.cpp)
ament_target_dependencies(turtle_sq_shape  rclcpp geometry_msgs)

add_executable(tf2_broadcaster  src/tf2_broadcaster.cpp)
ament_target_dependencies(tf2_broadcaster  rclcpp turtlesim tf2 tf2_ros geometry_msgs)

add_executable(tf2_listener  src/tf2_listener.cpp)
ament_target_dependencies(tf2_listener  rclcpp turtlesim tf2 tf2_ros geometry_msgs)

install(TARGETS
pub_param
sub_param
srv_node1
srv_node2
pub_custom
sub_custom
turtle_sq_shape
tf2_broadcaster
tf2_listener
DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
launch
DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
