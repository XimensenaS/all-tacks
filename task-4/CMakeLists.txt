cmake_minimum_required(VERSION 3.13.0)
project(task-four VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(BUILD_CPR_TESTS OFF)
SET(CMAKE_USE_OPENSSL OFF)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 09e9f84b3b0da9c2f0557f45688578c2e5974fd0)
FetchContent_MakeAvailable(cpr)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(MY_FILES ${CMAKE_SOURCE_DIR}/files)
add_subdirectory(src)
target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr)