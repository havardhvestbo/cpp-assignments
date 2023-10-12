cmake_minimum_required(VERSION 3.5)

project(assignment3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra")

add_executable(task2 task2.cpp)
add_executable(task3 task3/main.cpp task3/commodity.cpp)
add_executable(task4 task4.cpp)