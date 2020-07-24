cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(bogo_16 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(QT5_LIBS Qt5::Core Qt5::Widgets)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

qt5_wrap_ui(UI_WRAP mainwindow.ui)
qt5_wrap_cpp(MOC_SOURCES mainwindow.h)

add_executable(main
    ${UI_WRAP}
    ${MOC_SOURCES}
    mainwindow.h
    mainwindow.cpp
    main.cpp
    )

target_link_libraries(main PUBLIC ${QT5_LIBS})
