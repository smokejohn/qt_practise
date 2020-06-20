cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_12 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)


add_executable(lines
    lines.h
    lines.cpp
    lines_main.cpp)

target_link_libraries(lines PUBLIC ${libs})


add_executable(colours
    colours.h
    colours.cpp
    clrs_main.cpp)

target_link_libraries(colours PUBLIC ${libs})

add_executable(patterns
    patterns.h
    patterns.cpp
    ptrns_main.cpp)

target_link_libraries(patterns PUBLIC ${libs})


add_executable(transparent
    transparent.h
    transparent.cpp
    trans_main.cpp)

target_link_libraries(transparent PUBLIC ${libs})


add_executable(donut
    donut.h
    donut.cpp
    donut_main.cpp)

target_link_libraries(donut PUBLIC ${libs})


add_executable(shapes
    shapes.h
    shapes.cpp
    shapes_main.cpp)

target_link_libraries(shapes PUBLIC ${libs})


add_executable(gradient
    gradient.h
    gradient.cpp
    gradient_main.cpp)

target_link_libraries(gradient PUBLIC ${libs})


add_executable(rgradient
    rgradient.h
    rgradient.cpp
    rgradient_main.cpp)

target_link_libraries(rgradient PUBLIC ${libs})


add_executable(puff
    puff.h
    puff.cpp
    puff_main.cpp)

target_link_libraries(puff PUBLIC ${libs})
