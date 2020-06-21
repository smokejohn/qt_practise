cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_14 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

add_executable(Snake
    snake.h
    snake.cpp
    main.cpp)

target_link_libraries(Snake PUBLIC ${libs})
