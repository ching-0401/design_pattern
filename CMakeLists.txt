cmake_minimum_required(VERSION 3.15)

project(design_pattern LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(doctest REQUIRED)

add_subdirectory(${CMAKE_SOURCE_DIR}/singleton)


#add_executable(design_pattern main.cpp ${SOURCES})
#target_link_libraries(design_pattern )
#
