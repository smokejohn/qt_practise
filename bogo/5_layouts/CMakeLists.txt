cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_5 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(libs Qt5::Core Qt5::Widgets)

qt5_wrap_ui(ui_wrap layoutdialog.ui)
qt5_wrap_cpp(moc_source layoutdialog.h)

add_executable(main
    layoutdialog.h
    layoutdialog.cpp
    ${moc_source}
    ${ui_wrap}
    main.cpp)

target_link_libraries(main PUBLIC ${libs})
