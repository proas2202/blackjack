cmake_minimum_required(VERSION 3.17)
project(TEST_CONSOLE)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEST_CONSOLE test_console.cpp)

target_link_libraries(TEST_CONSOLE gtest)
target_link_libraries(TEST_CONSOLE CONSOLE)