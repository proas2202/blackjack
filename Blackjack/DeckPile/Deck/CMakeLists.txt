cmake_minimum_required(VERSION 3.17)
project(Deck)

set(CMAKE_CXX_STANDARD 14)

add_library(Deck Deck.h Deck.cpp)

add_subdirectory(test_deck)

target_include_directories(Deck PUBLIC .)