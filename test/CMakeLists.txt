set(TEST_NAME ${PROJECT_NAME}_test)

include_directories (${GTEST_INCLUDE_DIRS})

# test source files
set (TEST_SOURCES
    subdirectory/lib_test.cpp
)


# Build the test executable.
add_executable (${TEST_NAME} ${TEST_SOURCES})
add_dependencies (${TEST_NAME} googletest)

target_link_libraries (${TEST_NAME} pthread)
target_link_libraries (${TEST_NAME}
    ${GTEST_LIBS_DIR}/libgtest.a
    ${GTEST_LIBS_DIR}/libgtest_main.a
)
target_link_libraries (${TEST_NAME} ${PROJECT_NAME}_lib)
