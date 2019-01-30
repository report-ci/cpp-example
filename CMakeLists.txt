cmake_minimum_required(VERSION 3.8)
project(cpp_example)

set(CXXTEST_TESTGEN_ARGS --runner=XmlPrinter --world=Pluto)
find_package(CxxTest)
include_directories(${CXXTEST_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 14)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIR})
include_directories(libs libs/cute/cute)

option(EXTENSIONS "" OFF)
option(C++11 "" ON)
option(TESTS "" OFF)


add_subdirectory(libs/cpputest)
add_subdirectory(test)