cmake_minimum_required(VERSION 3.5)

project(assignment6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra")

add_executable(chess chess.cpp)