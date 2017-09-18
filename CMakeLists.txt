cmake_minimum_required(VERSION 3.7)
project(Course)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/Week1/week1.cpp cmake-build-debug/Week1/week1.h Week2/week2.cpp Week2/week2.h Week3/week3.cpp Week3/week3.h Week4/Week4.cpp Week4/Week4.h)
add_executable(Course ${SOURCE_FILES})