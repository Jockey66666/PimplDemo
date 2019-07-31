cmake_minimum_required(VERSION 3.14)
project(PimplDemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PimplDemo
        main.cpp
        Widget.cpp
        Widget.h)
