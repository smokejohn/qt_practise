cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_2 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

qt5_wrap_ui(ui_wrap mainwindow.ui)
qt5_wrap_cpp(moc_sources mainwindow.h)

add_executable(signalslots
    mainwindow.h
    mainwindow.cpp
    main.cpp
    ${moc_sources}
    ${ui_wrap}
    )

target_link_libraries(signalslots PUBLIC ${libs})
