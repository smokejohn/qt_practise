cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(bogo_30 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

qt5_wrap_ui(QT_UI tooltipsdialog.ui)
qt5_add_resources(QT_RES resources.qrc)

add_executable(main 
    ${QT_UI}
    ${QT_RES}
    tooltipsdialog.h
    tooltipsdialog.cpp
    main.cpp
    )

target_link_libraries(main PUBLIC Qt5::Core Qt5::Widgets)
