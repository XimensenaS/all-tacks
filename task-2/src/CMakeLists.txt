cmake_minimum_required(VERSION 3.0.0)

include(CTest)
enable_testing()
target_include_directories(task-two PUBLIC ${MY_INCLUDE_DIR})
target_include_directories(task-two PUBLIC ${MY_FILES})
add_executable(task-two
    main.cpp 
    cpu.cpp
    disk.cpp
    gpu.cpp
    kbd.cpp
    ram.cpp
    ${MY_INCLUDE_DIR}cpu.h
    ${MY_INCLUDE_DIR}disk.h
    ${MY_INCLUDE_DIR}gpu.h
    ${MY_INCLUDE_DIR}kbd.h
    ${MY_INCLUDE_DIR}ram.h
    ${MY_FILES}data.txt
)

