cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_4 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

qt5_wrap_ui(ui_wrap mainwindow.ui)
qt5_wrap_cpp(moc_sources mainwindow.h)
qt5_add_resources(qt_res resources.qrc)

add_executable(main
    ${moc_sources}
    ${ui_wrap}
    ${qt_res}
    mainwindow.h
    mainwindow.cpp
    main.cpp
    )

target_link_libraries(main PUBLIC ${libs})
