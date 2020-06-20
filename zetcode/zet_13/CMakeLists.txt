cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_13 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

qt5_wrap_cpp(moc_burning burning.h)

add_executable(burning
    burning.h
    ${moc_burning}
    burning.cpp
    widget.h
    widget.cpp
    main.cpp
    )

target_link_libraries(burning
    PUBLIC
    ${libs})
