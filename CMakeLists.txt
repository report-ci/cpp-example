cmake_minimum_required(VERSION 3.8)
project(cpp_example)

set(CXXTEST_TESTGEN_ARGS --runner=XmlPrinter --world=Pluto)
find_package(CxxTest)
include_directories(${CXXTEST_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 14)

include_directories(libs libs/cute/cute)

add_subdirectory(libs/cpputest)
add_subdirectory(test)