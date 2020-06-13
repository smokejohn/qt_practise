cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_1 LANGUAGES CXX)

find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)

# BINARY version
add_executable(version
    version.cpp
    )

target_link_libraries(version
    PUBLIC
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    )

# BINARY project (zet_1)
add_executable(${PROJECT_NAME}
    main.cpp
    )

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    )
