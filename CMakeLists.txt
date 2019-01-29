cmake_minimum_required(VERSION 3.13)
project(cpp_example)

find_package(Python REQUIRED Interpreter)

set(CXXTEST_TESTGEN_ARGS --runner=XmlPrinter --world=Pluto)
find_package(CxxTest)
include_directories(${CXXTEST_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 14)

include_directories(libs libs/catch2/single_include libs/cute/cute)

add_subdirectory(libs/cpputest)
add_subdirectory(test)