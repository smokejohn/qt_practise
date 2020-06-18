cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_8 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

set(libs Qt5::Core Qt5::Widgets)

add_executable(absolute absolute.cpp)
target_link_libraries(absolute PUBLIC ${libs})

add_executable(verticalbox 
    verticalbox.h 
    verticalbox.cpp
    vb_main.cpp)
target_link_libraries(verticalbox PUBLIC ${libs})

add_executable(buttons 
    buttons.h 
    buttons.cpp
    btns_main.cpp)
target_link_libraries(buttons PUBLIC ${libs})

add_executable(nesting 
    nesting.h 
    nesting.cpp
    nest_main.cpp)
target_link_libraries(nesting PUBLIC ${libs})

add_executable(form 
    form.h 
    form.cpp
    form_main.cpp)
target_link_libraries(form PUBLIC ${libs})

add_executable(calculator 
    calculator.h 
    calculator.cpp
    calc_main.cpp)
target_link_libraries(calculator PUBLIC ${libs})

add_executable(review 
    review.h 
    review.cpp
    rev_main.cpp)
target_link_libraries(review PUBLIC ${libs})
