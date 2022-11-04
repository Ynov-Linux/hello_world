cmake_minimum_required(VERSION 3.22.1)

project(helloworld VERSION 1.0.0 LANGUAGES C)

file(
    GLOB
    sources_files
    src/*
)
add_subdirectory(lib)
add_executable(helloworld ${sources_files})
add_dependencies(helloworld world)
target_link_libraries(helloworld world)
target_include_directories(helloworld PUBLIC inc)
