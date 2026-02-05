cmake_minimum_required(VERSION 3.14)
project(sum_sin VERSION 0.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(FLOAT "Use float or double" OFF)
add_executable(tst1 task_1.cpp)