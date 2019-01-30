enable_testing()

if (WIN32)
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.cmd)
else()
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.sh)
endif()

add_executable(bandit bandit.cpp)
add_test(NAME bandit COMMAND ${REDIRECT} "$<TARGET_FILE:bandit> --reporter=xunit" ${CMAKE_CURRENT_BINARY_DIR}/bandit.xml)

add_executable(cpputester cpputest.cpp)
target_link_libraries(cpputester PUBLIC CppUTest)
add_test(NAME cpputest COMMAND $<TARGET_FILE:cpputester> -ojunit -k CppUTest)

add_executable(cute cute.cpp)
add_test(NAME cute COMMAND $<TARGET_FILE:cute>)

CXXTEST_ADD_TEST(cxxtester cxxtest_impl.cpp ${CMAKE_CURRENT_SOURCE_DIR}/cxxtest.cpp)
add_test(NAME cxxtest COMMAND ${REDIRECT} $<TARGET_FILE:cxxtester> cxxtest.xml)

add_executable(gtester gtest.cpp)
target_link_libraries(gtester gtest)

add_test(NAME gtest COMMAND $<TARGET_FILE:gtester> --gtest_output=xml:gtest.xml)

