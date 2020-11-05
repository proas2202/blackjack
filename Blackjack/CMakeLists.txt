cmake_minimum_required(VERSION 3.17)
project(Blackjack)

set(CMAKE_CXX_STANDARD 14)

add_library(Blackjack Blackjack.h Blackjack.cpp )

add_subdirectory(DeckPile)

#add_subdirectory(test_deck)

target_include_directories(Blackjack PUBLIC .)