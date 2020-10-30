cmake_minimum_required(VERSION 3.17)
project(Task_1)

add_subdirectory(Calc)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task_1 main.cpp)

target_link_libraries(Task_1 Calc)

add_subdirectory(sub/googletest)