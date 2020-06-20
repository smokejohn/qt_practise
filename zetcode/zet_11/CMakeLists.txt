cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_11 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)


qt5_wrap_cpp(moc_check checkbox.h)

add_executable(checkbox
    checkbox.h
    ${moc_check}
    checkbox.cpp
    check_main.cpp)
    
target_link_libraries(checkbox PUBLIC ${libs})


qt5_wrap_cpp(moc_list listwidget.h)

add_executable(listwidget
    listwidget.h
    ${moc_list}
    listwidget.cpp
    list_main.cpp)
    
target_link_libraries(listwidget PUBLIC ${libs})


add_executable(progressbar
    progressbar.h
    progressbar.cpp
    prog_main.cpp)
    
target_link_libraries(progressbar PUBLIC ${libs})


add_executable(pixmap
    pixmap.h
    pixmap.cpp
    pix_main.cpp)
    
target_link_libraries(pixmap PUBLIC ${libs})


add_executable(splitter
    splitter.h
    splitter.cpp
    splt_main.cpp)
    
target_link_libraries(splitter PUBLIC ${libs})

add_executable(table
    table.h
    table.cpp
    table_main.cpp)
    
target_link_libraries(table PUBLIC ${libs})
