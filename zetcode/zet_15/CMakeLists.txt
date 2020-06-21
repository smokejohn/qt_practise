cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_15 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

add_executable(Breakout
    brick.h
    brick.cpp
    ball.h
    ball.cpp
    paddle.h
    paddle.cpp
    breakout.h
    breakout.cpp
    main.cpp
    )

target_link_libraries(Breakout PUBLIC ${libs})
