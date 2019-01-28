enable_testing()

if (WIN32)
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.cmd)
else()
    set(REDIRECT ${CMAKE_CURRENT_SOURCE_DIR}/redirect.sh)
endif()

add_executable(bandit bandit.cpp)
add_test(NAME bandit COMMAND ${REDIRECT} "$<TARGET_FILE:bandit> --reporter=xml" ${CMAKE_CURRENT_BINARY_DIR}/unity_test.xml)

add_executable(catch catch.cpp)
add_test(NAME catch COMMAND $<TARGET_FILE:catch> --reporter=xml --out=${CMAKE_CURRENT_BINARY_DIR}/catch_log.xml)