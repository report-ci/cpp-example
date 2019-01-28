cmake_minimum_required(VERSION 3.13)
project(cpp_example)

set(CMAKE_CXX_STANDARD 14)

include_directories(libs libs/catch2/single_include)

add_subdirectory(libs/cpputest)
add_subdirectory(test)