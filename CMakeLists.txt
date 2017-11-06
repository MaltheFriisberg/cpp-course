cmake_minimum_required(VERSION 3.7)
project(Course)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/Week1/week1.cpp cmake-build-debug/Week1/week1.h Week2/week2.cpp Week2/week2.h Week3/week3.cpp Week3/week3.h Week4/Week4.cpp Week4/Week4.h Week5/Week5.cpp Week5/Week5.h Week6/fraction.cpp Week7/vector2d.cpp Week7/vector2d.h Week8/shapes.cpp Week8/shapes.h Week8/Rectangle.cpp Week8/Rectangle.h Week8/Square.cpp Week8/Square.h Week8/Circle.cpp Week8/Circle.h Week9/week9.cpp Week9/week9.h)
add_executable(Course ${SOURCE_FILES})