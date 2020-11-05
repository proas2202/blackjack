cmake_minimum_required(VERSION 3.17)
project(Task_1)

add_subdirectory(sub/googletest)

add_subdirectory(Calc)
add_subdirectory(Blackjack)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task_1 main.cpp)

target_link_libraries(Task_1 Calc Deck DeckPile Blackjack)

