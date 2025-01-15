cmake_minimum_required(VERSION 3.10.0)

project(qt_hello_world)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the Qt5 package
find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

# Add the executable or library
add_executable(${PROJECT_NAME} main.cpp)

# Link the Qt5 libraries to your project
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)