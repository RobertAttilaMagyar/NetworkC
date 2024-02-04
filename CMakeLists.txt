

cmake_minimum_required(VERSION 3.12)

project(NetworkC)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB LIB_SOURCES "src/*.cpp")
file(GLOB MAIN_SOURCE "main.cpp")

add_library(MyLib ${LIB_SOURCES})

add_executable(netmain ${MAIN_SOURCE})

target_link_libraries(netmain MyLib)