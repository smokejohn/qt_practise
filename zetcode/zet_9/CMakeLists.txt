cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_9 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

add_executable(click
    click.h
    click.cpp
    click_main.cpp
    )
target_link_libraries(click PUBLIC ${libs})

add_executable(keypress
    keypress.h
    keypress.cpp
    kp_main.cpp
    )
target_link_libraries(keypress PUBLIC ${libs})

add_executable(move
    move.h
    move.cpp
    mv_main.cpp
    )
target_link_libraries(move PUBLIC ${libs})

qt5_wrap_cpp(moc_dc disconnect.h)

add_executable(disconnect
    disconnect.h
    ${moc_dc}
    disconnect.cpp
    dc_main.cpp
    )
target_link_libraries(disconnect PUBLIC ${libs})

add_executable(timer
    timer.h
    timer.cpp
    timer_main.cpp
    )
target_link_libraries(timer PUBLIC ${libs})
