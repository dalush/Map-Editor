cmake_minimum_required (VERSION 3.8)

set(PROJECT_NAME editor)
project(${PROJECT_NAME} LANGUAGES CXX)

file(GLOB SRC_FILES src/*.cpp src/*.h)
add_executable(${PROJECT_NAME} ${SRC_FILES})