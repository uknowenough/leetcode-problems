cmake_minimum_required(VERSION 3.5)

project(leetcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(leetcode
    include/listnode.h
    include/solution_1706.h src/solution_1706.cpp
    include/solution_2.h    src/solution_2.cpp
    include/solution_766.h  src/solution_766.cpp
    include/solution_792.h  src/solution_792.cpp
    include/solution_242.h  src/solution_242.cpp
    include/solution_3.h    src/solution_3.cpp
    include/solution_1.h    src/solution_1.cpp
    include/solution_307.h  src/solution_307.cpp
    include/solution_946.h  src/solution_946.cpp
    include/solution_13.h   src/solution_13.cpp
    include/solution_455.h   src/solution_455.cpp
)

add_subdirectory(test)
