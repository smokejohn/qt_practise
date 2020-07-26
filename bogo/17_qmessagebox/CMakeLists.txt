cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(bogo_17 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(QTLIBS Qt5::Core Qt5::Widgets)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

qt5_wrap_ui(UI_WRAP dialog.ui)
qt5_wrap_cpp(MOC_SOURCES dialog.h)

add_executable(main
    ${UI_WRAP}
    ${MOC_SOURCES}
    dialog.h
    dialog.cpp
    main.cpp
    )

target_link_libraries(main PUBLIC ${QTLIBS})
