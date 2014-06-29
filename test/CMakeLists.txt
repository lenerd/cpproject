set(TEST_NAME ${PROJECT_NAME}_test)

find_package (GTest REQUIRED)
include_directories (${GTEST_INCLUDE_DIRS})

# enable_testing ()

# test source files
set (TEST_SOURCES
    subdirectory/lib_test.cpp
)


# Build the test executable.
add_executable(${TEST_NAME} ${TEST_SOURCES})

target_link_libraries (${TEST_NAME} ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
target_link_libraries (${TEST_NAME} ${PROJECT_NAME}_lib)
