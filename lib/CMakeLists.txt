cmake_minimum_required(VERSION 3.16)
project(world VERSION 1.0.0 LANGUAGES C)

file(
    GLOB
    sources_files
    src/*.c
)

add_library(world STATIC ${sources_files})
target_include_directories(world PUBLIC inc)
