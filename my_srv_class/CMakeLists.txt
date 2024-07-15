cmake_minimum_required(VERSION 3.8)
project(my_srv_class)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(my_messages REQUIRED)

add_executable(srv_test
	src/my_srv.cpp
	src/my_srv_main.cpp
)
ament_target_dependencies(srv_test
	rclcpp
	my_messages
)

add_executable(clnt_test
	src/my_clnt.cpp
	src/my_clnt_main.cpp
)
ament_target_dependencies(clnt_test
	rclcpp
	my_messages
)

install(TARGETS
	srv_test
	clnt_test
	DESTINATION lib/${PROJECT_NAME}
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
