cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(bogo_14 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(LIBS Qt5::Core Qt5::Widgets)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

qt5_wrap_ui(UI_WRAP dialog.ui)
qt5_wrap_cpp(MOC_SOURCE dialog.h)

add_executable(main
    dialog.h
    ${UI_WRAP}
    ${MOC_SOURCE}
    dialog.cpp
    main.cpp
    )

target_link_libraries(main PUBLIC ${LIBS})
