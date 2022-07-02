cmake_minimum_required(VERSION 3.15)
project(floydwarshall CXX)

add_library(floydwarshall)

target_sources(
    floydwarshall
    PUBLIC
        floydwarshall.hpp
    PRIVATE
        floydwarshall.cpp
)

target_include_directories(
    floydwarshall
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}  
)

target_link_libraries(
    floydwarshall
    PRIVATE
        project_options   
)