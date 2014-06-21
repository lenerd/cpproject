# main source (startup functionality)
set (MAIN_SOURCE
    main.cpp
)

# other source files
set (PROJECT_SOURCES
    subdirectory/lib.cpp
)


# Find includes in corresponding build directories
set (CMAKE_INCLUDE_CURRENT_DIR ON)

add_library (${PROJECT_NAME}_lib ${PROJECT_SOURCES})
add_executable (${PROJECT_NAME} ${MAIN_SOURCE})

# target_link_libraries (${PROJECT_NAME}
#     
# )

target_link_libraries (${PROJECT_NAME} ${PROJECT_NAME}_lib)


install (TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_BINARY_DIR})
