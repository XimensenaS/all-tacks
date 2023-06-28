cmake_minimum_required(VERSION 3.0.0)
project(task-two VERSION 0.1.0)

include(CTest)
enable_testing()

include(CPack)
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(MY_FILES ${CMAKE_SOURCE_DIR}/files)
add_subdirectory(src)