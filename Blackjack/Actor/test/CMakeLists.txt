cmake_minimum_required(VERSION 3.17)
project(TEST_ACTOR)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEST_ACTOR test_actor.cpp)

target_link_libraries(TEST_ACTOR gtest)
target_link_libraries(TEST_ACTOR ACTORS)