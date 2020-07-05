cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_11 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(qt_libs Qt5::Core)

qt5_add_resources(qt_resources resources.qrc)

add_executable(main
    main.cpp
    ${qt_resources}
    )

target_link_libraries(main ${qt_libs})
