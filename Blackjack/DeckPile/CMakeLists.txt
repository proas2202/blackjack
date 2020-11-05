cmake_minimum_required(VERSION 3.17)
project(DeckPile)

set(CMAKE_CXX_STANDARD 14)

add_library(DeckPile DeckPile.h DeckPile.cpp )

add_subdirectory(Deck)

target_include_directories(DeckPile PUBLIC .)