cmake_minimum_required(VERSION 3.17)
project(Calc)

set(CMAKE_CXX_STANDARD 14)

add_library(Calc strCalc.h strCalc.cpp )

add_subdirectory(test)

target_include_directories(Calc PUBLIC .)