cmake_minimum_required(VERSION 3.0.0)
project(task_one VERSION 0.1.0 )

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)