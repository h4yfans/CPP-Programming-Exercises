cmake_minimum_required(VERSION 3.5)
project(Exercises6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Exercises6 ${SOURCE_FILES})