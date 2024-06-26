cmake_minimum_required(VERSION 3.8)
project(template)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(smov_lib REQUIRED)

include_directories(include)

set (dependencies 
  rclcpp 
  smov_lib
)

# You might want to edit this in case of a library or just an executable. 
add_library(template_lib SHARED src/template.cc)
ament_target_dependencies(template_lib ${dependencies})

add_executable(state src/template.cc)
target_link_libraries(state template_lib)
ament_target_dependencies(state ${dependencies})

install(TARGETS state template_lib
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include/
)

ament_export_include_directories(include)
ament_export_libraries(template_lib)
ament_export_dependencies(${dependencies})

ament_package()
