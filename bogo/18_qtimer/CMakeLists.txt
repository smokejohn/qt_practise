cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(bogo_18 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core)

qt5_wrap_cpp(MOC_SRC mytimer.h)

add_executable(main
    ${MOC_SRC}
    mytimer.h
    mytimer.cpp
    main.cpp
    )

target_link_libraries(main PUBLIC Qt5::Core)
