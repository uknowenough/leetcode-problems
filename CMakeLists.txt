cmake_minimum_required(VERSION 3.5)

project(leetcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(leetcode src/main.cpp
    include/solution_792.h src/solution_792.cpp
    include/solution_242.h src/solution_242.cpp
    include/solution_3.h src/solution_3.cpp
    include/solution_1.h src/solution_1.cpp
)

add_subdirectory(test)
