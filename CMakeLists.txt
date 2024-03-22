cmake_minimum_required(VERSION 3.21 FATAL_ERROR)
project(assignment-1)

set(CMAKE_CXX_STANDARD 20)

add_executable(week_1 main.cpp operation.h addition.cpp addition.h
        multiplication.h
        multiplication.cpp
        subtraction.h
        subtraction.cpp)

target_compile_options(Week3Constructors PRIVATE -Wall -Wextra -pedantic -fsanitize=address)
target_link_options(Week3Constructors PRIVATE -fsanitize=address)

