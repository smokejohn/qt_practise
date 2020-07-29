cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(bogo_22 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC Qt5::Core)
