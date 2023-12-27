cmake_minimum_required(VERSION 3.26)
project(TODO_Project)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(TODO_Project src/main.cpp
        include/Task.h
        include/TodoList.h
        include/Date.h
        src/Task.cpp
        src/TodoList.cpp
        src/Date.cpp)
