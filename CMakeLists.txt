project(math_class)
cmake_minimum_required(VERSION 2.8)

# add_subdirectory(math_class)


include_directories(math_class/include)

add_executable(test main.cpp ${CMAKE_SOURCE_DIR}/math_class/src/math_class.cpp)