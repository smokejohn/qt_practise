cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_4 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)
find_package(Qt5PrintSupport REQUIRED)


set(libs Qt5::Core Qt5::Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
qt5_wrap_ui(ui_wrap imageviewer.ui)
qt5_wrap_cpp(moc_sources imageviewer.h)

add_executable(main
    imageviewer.h
    imageviewer.cpp
    ${ui_wrap}
    ${moc_sources}
    main.cpp
    )

target_link_libraries(main 
    ${libs}
    Qt5::PrintSupport)
