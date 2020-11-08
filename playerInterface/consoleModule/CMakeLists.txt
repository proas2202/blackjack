cmake_minimum_required(VERSION 3.17)
project(CONSOLE)

set(CMAKE_CXX_STANDARD 14)

add_library(CONSOLE consoleModule.cpp consoleModule.h)

add_subdirectory(test)

#add_subdirectory(test_deck)
#target_link_libraries(CONSOLE )
target_include_directories(CONSOLE PUBLIC .)