cmake_minimum_required(VERSION 3.17)
project(TEST_DECKPILE)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEST_DECKPILE test_deckPile.cpp)

target_link_libraries(TEST_DECKPILE gtest)
target_link_libraries(TEST_DECKPILE DeckPile)