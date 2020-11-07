cmake_minimum_required(VERSION 3.17)
project(TEST_HAND)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEST_HAND test_hand.cpp)

target_link_libraries(TEST_HAND gtest)
target_link_libraries(TEST_HAND HAND)