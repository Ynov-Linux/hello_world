cmake_minimum_required(VERSION 3.22.1)

project(helloworld VERSION 1.0.0 LANGUAGES C)

add_executable(helloworld ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c)
