cmake_minimum_required(VERSION 3.8)

project(CPU6502)

set(CMAKE_C_STANDARD_REQUIRED 20)

add_executable(CPU6502 "src/main.cpp")
include_directories(CPU6502 "include/")