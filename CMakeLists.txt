cmake_minimum_required (VERSION 2.8.12)

# project name
set (PROJECT_NAME cpproject)
project (${PROJECT_NAME})

# Version numbers
set (qspa_VERSION_MAJOR 0)
set (qspa_VERSION_MINOR 1)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pedantic")
set (CMAKE_CXX_FLAGS_DEBUG "-ggdb3 -O0")

find_package (Doxygen)
if (DOXYGEN_FOUND)
    configure_file (${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
        ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
    add_custom_target (doc
        ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen" VERBATIM
    )
endif (DOXYGEN_FOUND)


include_directories (src)

add_subdirectory(src)
add_subdirectory(test)
