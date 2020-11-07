cmake_minimum_required(VERSION 3.17)
project(HAND)

set(CMAKE_CXX_STANDARD 14)

add_library(HAND Hand.h Hand.cpp )

add_subdirectory(test)

target_link_libraries(HAND Deck)

target_include_directories(HAND PUBLIC .)