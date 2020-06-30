cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_7 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

add_executable(main
    main.cpp)

target_link_libraries(main PUBLIC ${libs})
