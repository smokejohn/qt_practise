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

add_executable(comparing comparing.cpp)
target_link_libraries(comparing PUBLIC Qt5::Core Qt5::Widgets)

add_executable(output output.cpp)
target_link_libraries(output PUBLIC Qt5::Core Qt5::Widgets)

add_executable(letters letters.cpp)
target_link_libraries(letters PUBLIC Qt5::Core Qt5::Widgets)

add_executable(modify modify.cpp)
target_link_libraries(modify PUBLIC Qt5::Core Qt5::Widgets)

add_executable(right_align right_align.cpp)
target_link_libraries(right_align PUBLIC Qt5::Core Qt5::Widgets)

add_executable(html_escape html_escape.cpp)
target_link_libraries(html_escape PUBLIC Qt5::Core Qt5::Widgets)
