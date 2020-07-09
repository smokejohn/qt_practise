cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_12 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

qt5_wrap_ui(ui_wrap comboboxdialog.ui)
qt5_wrap_cpp(moc_sources comboboxdialog.hpp)

add_executable(main
    comboboxdialog.hpp
    comboboxdialog.cpp
    ${ui_wrap}
    ${moc_sources}
    main.cpp
    )

target_link_libraries(main PUBLIC ${libs})
