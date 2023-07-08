cmake_minimum_required(VERSION 3.0.0)

target_include_directories(${PROJECT_NAME} PUBLIC ${MY_INCLUDE_DIR})
add_executable(${PROJECT_NAME} 
    task1.cpp 
    ${MY_INCLUDE_DIR}/tools.h 
    tools.cpp)
