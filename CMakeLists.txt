cmake_minimum_required(VERSION 3.8)
project(cpp_example)

set(CXXTEST_TESTGEN_ARGS --runner=XmlPrinter --world=Pluto)
find_package(CxxTest)
include_directories(${CXXTEST_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 14)
set(GOOGLETEST_ROOT libs/googletest/googletest CACHE STRING "Google Test source root")

include_directories(${GOOGLETEST_ROOT} ${GOOGLETEST_ROOT}/include)

file(GLOB GOOGLETEST_SOURCES ${GOOGLETEST_ROOT}/src/*.cc)

add_library(gtest ${GOOGLETEST_SOURCES})

include_directories(libs libs/cute/cute)

option(EXTENSIONS "" OFF)
option(C++11 "" ON)
option(TESTS "" OFF)
find_package (Threads)


add_subdirectory(libs/cpputest)
add_subdirectory(test)