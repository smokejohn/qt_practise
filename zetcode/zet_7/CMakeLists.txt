cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_7 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs
    Qt5::Core
    Qt5::Widgets
    )


add_executable(simplemenu 
    simplemenu.h 
    simplemenu.cpp
    sm_main.cpp
    )

target_link_libraries(simplemenu PUBLIC ${libs})


add_executable(anothermenu 
    anothermenu.h 
    anothermenu.cpp
    am_main.cpp
    )

target_link_libraries(anothermenu PUBLIC ${libs})


qt5_wrap_cpp(moc_checkable
    checkable.h
    )

add_executable(checkable
    checkable.h
    ${moc_checkable}
    checkable.cpp
    ca_main.cpp
    )

target_link_libraries(checkable PUBLIC ${libs})


add_executable(toolbar
    toolbar.h
    toolbar.cpp
    tb_main.cpp
    )

target_link_libraries(toolbar PUBLIC ${libs})


add_executable(skeleton
    skeleton.h
    skeleton.cpp
    sk_main.cpp
    )

target_link_libraries(skeleton PUBLIC ${libs})
