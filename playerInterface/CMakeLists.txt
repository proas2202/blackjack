cmake_minimum_required(VERSION 3.17)
project(PLINTERFACE)

set(CMAKE_CXX_STANDARD 14)

add_library(PLINTERFACE playerInterface.h playerInterface.cpp)

add_subdirectory(consoleModule)

#add_subdirectory(test_deck)
target_link_libraries(PLINTERFACE )
target_include_directories(PLINTERFACE PUBLIC .)