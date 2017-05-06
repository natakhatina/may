cmake_minimum_required(VERSION 3.6)
project(may)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header.h)
add_executable(may ${SOURCE_FILES})