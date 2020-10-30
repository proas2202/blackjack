cmake_minimum_required(VERSION 3.17)
project(Assignment_2)

add_subdirectory(Calc)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment_2 main.cpp)

target_link_libraries(Assignment_2 Calc)

add_subdirectory(sub/googletest)