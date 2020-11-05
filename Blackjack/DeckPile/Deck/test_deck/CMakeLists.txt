cmake_minimum_required(VERSION 3.17)
project(TEST_DECK)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEST_DECK test_deck.cpp)

target_link_libraries(TEST_DECK gtest)
target_link_libraries(TEST_DECK Deck)