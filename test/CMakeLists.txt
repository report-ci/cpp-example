enable_testing()

if (WIN32)
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.cmd)
else()
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.sh)
endif()

add_executable(bandit bandit.cpp)
add_test(NAME bandit COMMAND "$<TARGET_FILE:bandit> --reporter=xml" ${CMAKE_CURRENT_BINARY_DIR}/unity_test.log)

add_executable(catch catch.cpp)
add_test(NAME catch COMMAND $<TARGET_FILE:catch>)