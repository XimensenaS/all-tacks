cmake_minimum_required(VERSION 3.13)
project(task-two VERSION 0.1.0)

include(CTest)
enable_testing()

set(BUILD_CPR_TESTS OFF)
SET(CMAKE_USE_OPENSSL OFF)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 09e9f84b3b0da9c2f0557f45688578c2e5974fd0)
FetchContent_MakeAvailable(cpr)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.2/json.tar.xz)
FetchContent_MakeAvailable(json)

include(CPack)
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(MY_FILES ${CMAKE_SOURCE_DIR}/files)
add_subdirectory(src)
target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)