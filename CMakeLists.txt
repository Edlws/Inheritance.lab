cmake_minimum_required(VERSION 3.26)
project(Inheritance_lab)

set(CMAKE_CXX_STANDARD 17)

add_executable(Inheritance_lab main.cpp
        student.h
        student.cpp
        studentFirstSession.h
        studentSecondSession.h
        studentFirstSession.cpp
        studentSecondSession.cpp
)
