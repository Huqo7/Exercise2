cmake_minimum_required(VERSION 3.27)
project(Exercise2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Exercise2 main.cpp src/Person.cpp)
target_include_directories(Exercise2 PRIVATE include)