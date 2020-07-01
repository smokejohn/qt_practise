cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_8 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(libs Qt5::Core Qt5::Widgets)

qt5_wrap_ui(ui_wrap splitterdialog.ui)

add_executable(main
    splitterdialog.h
    splitterdialog.cpp
    ${ui_wrap}
    main.cpp
    )

target_link_libraries(main PUBLIC ${libs})
