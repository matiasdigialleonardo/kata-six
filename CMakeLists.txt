cmake_minimum_required(VERSION 3.20)
project(ChattyCakes LANGUAGES CXX)

add_executable(main)
target_sources(main PRIVATE "main.cpp")
target_include_directories(main PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory("include")
add_subdirectory("src")
add_subdirectory("lib_notification")