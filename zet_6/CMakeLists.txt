cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_6 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
# set(CMAKE_BUILD_TYPE Debug)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs_gui
    PUBLIC 
    Qt5::Core
    Qt5::Widgets
    )


add_executable(simple simple.cpp)
target_link_libraries(simple ${libs_gui})

add_executable(tooltip tooltip.cpp)
target_link_libraries(tooltip ${libs_gui})

add_executable(icon icon.cpp)
target_link_libraries(icon ${libs_gui})

add_executable(cursors cursors.cpp)
target_link_libraries(cursors ${libs_gui})

add_executable(pushbutton pushbutton.cpp)
target_link_libraries(pushbutton ${libs_gui})


qt5_wrap_cpp(moc_sources plusminus.h)

add_executable(plusminus 
    ${moc_sources}
    plusminus.h 
    plusminus.cpp
    plusminus_main.cpp
    )

target_link_libraries(plusminus ${libs_gui})
