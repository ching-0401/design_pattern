cmake_minimum_required(VERSION 3.5)

project(design_pattern LANGUAGES CXX)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV 4)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(${CMAKE_SOURCE_DIR}/inc)

set (SOURCES
    ${CMAKE_SOURCE_DIR}/src/test.cpp
    ${CMAKE_SOURCE_DIR}/src/singleton.cpp)


#add_library(print SHARED ${SOURCES})
set(PRT_PATH ${CMAKE_SOURCE_DIR}/lib)

add_executable(design_pattern main.cpp ${SOURCES})
target_link_libraries(design_pattern ${OpenCV_LIBS} ${PRT_PATH}/libprint.so ${GTEST_BOTH_LIBRARIES} -lpthread)

