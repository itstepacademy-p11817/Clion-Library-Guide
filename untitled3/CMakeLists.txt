cmake_minimum_required(VERSION 3.8)
project(untitled3 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled3 main.c)

add_library(untitled4 STATIC IMPORTED)
include_directories(${CMAKE_SOURCE_DIR}/../untitled4/)
set_target_properties(untitled4 PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/../untitled4/cmake-build-debug/libuntitled4.a)
target_link_libraries(untitled3 untitled4)
