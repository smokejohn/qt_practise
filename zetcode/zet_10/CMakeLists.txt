cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_10 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

add_executable(label 
    label.h
    label.cpp
    lbl_main.cpp)
target_link_libraries(label PUBLIC ${libs})

add_executable(slider
    slider.h
    slider.cpp
    slider_main.cpp)
target_link_libraries(slider PUBLIC ${libs})

add_executable(combobox
    combobox.h
    combobox.cpp
    combo_main.cpp)
target_link_libraries(combobox PUBLIC ${libs})

add_executable(spinbox
    spinbox.h
    spinbox.cpp
    spin_main.cpp)
target_link_libraries(spinbox PUBLIC ${libs})

add_executable(ledit
    ledit.h
    ledit.cpp
    le_main.cpp)
target_link_libraries(ledit PUBLIC ${libs})

qt5_wrap_cpp(moc_status statusbar.h)

add_executable(statusbar
    statusbar.h
    ${moc_status}
    statusbar.cpp
    sb_main.cpp)
target_link_libraries(statusbar PUBLIC ${libs})
