cmake_minimum_required(VERSION 3.27)
project(blatt10)

set(CMAKE_CXX_STANDARD 20)
add_executable(main main.cpp
        SafeArray.cpp
        SafeArray.h)
