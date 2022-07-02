cmake_minimum_required(VERSION 3.15)
project(fw CXX)

add_library(
    project_options
    INTERFACE
)

add_subdirectory(lib)

add_executable(fw)

target_sources(
    fw
    PRIVATE
        main.cpp
)

target_link_libraries(
    fw
    PRIVATE
        project_options
        floydwarshall
)

target_compile_features(
    project_options
    INTERFACE
        cxx_std_20   
)
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(
        project_options
        INTERFACE
            -Wall
            -Wextra
            -Wpedantic
            -Werror   
    )
endif()