cmake_minimum_required(VERSION 3.17)
project(ACTORS)

set(CMAKE_CXX_STANDARD 14)

add_library(ACTORS Actor.h Actor.cpp Dealer.h Dealer.cpp Player.h Player.cpp)

add_subdirectory(Hand)

#add_subdirectory(test)

target_link_libraries(ACTORS HAND DeckPile)

target_include_directories(ACTORS PUBLIC .)