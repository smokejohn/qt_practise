cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(bogo_31 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

add_executable(main
    painterdialog.h
    painterdialog.cpp
    main.cpp)

target_link_libraries(main PUBLIC Qt5::Core Qt5::Widgets)
