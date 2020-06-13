cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_2 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC Qt5::Core Qt5::Widgets)

add_executable(init init.cpp)
target_link_libraries(init PUBLIC Qt5::Core Qt5::Widgets)

add_executable(access access.cpp)
target_link_libraries(access PUBLIC Qt5::Core Qt5::Widgets)

add_executable(length length.cpp)
target_link_libraries(length PUBLIC Qt5::Core Qt5::Widgets)

add_executable(building building.cpp)
target_link_libraries(building PUBLIC Qt5::Core Qt5::Widgets)

add_executable(substrings substrings.cpp)
target_link_libraries(substrings PUBLIC Qt5::Core Qt5::Widgets)

add_executable(looping looping.cpp)
target_link_libraries(looping PUBLIC Qt5::Core Qt5::Widgets)
