cmake_minimum_required(VERSION 3.17)
project(TEST)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEST Calc_test.cpp)

target_link_libraries(TEST Calc gtest)