cmake_minimum_required(VERSION 3.5)

project(leetcode_test LANGUAGES CXX)

enable_testing()

find_package(Threads REQUIRED)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
add_library(GMock::GMock INTERFACE IMPORTED)

target_link_libraries(GTest::GTest INTERFACE gtest_main)
target_link_libraries(GMock::GMock INTERFACE gmock_main)

add_executable(leetcode_test main.cpp
    tst_p_1706.cpp
    tst_p_766.cpp
    tst_p_792.cpp
    tst_p_242.cpp
    tst_p_2.cpp
    tst_p_3.cpp
    tst_p_1.cpp
    tst_p_307.cpp
    tst_p_946.cpp)

add_test(NAME leetcode_test COMMAND p_792 p_242 p_3 p_1)
target_link_libraries(leetcode_test PRIVATE GTest::GTest GMock::GMock Threads::Threads leetcode)
