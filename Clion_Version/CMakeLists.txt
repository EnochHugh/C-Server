cmake_minimum_required(VERSION 3.8)
project(Clion_Version)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Z_Head.h SubFunction.cpp)
add_executable(Clion_Version ${SOURCE_FILES} TestCode.cpp Main.cpp)