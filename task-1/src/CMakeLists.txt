cmake_minimum_required(VERSION 3.0.0)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(${CPACK_PROJECT_NAME} 
    task1.cpp 
    branch.h)