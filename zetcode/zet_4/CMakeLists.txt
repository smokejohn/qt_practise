cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_4 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(myvector myvector.cpp)
target_link_libraries(myvector PUBLIC Qt5::Core)

add_executable(mylist mylist.cpp)
target_link_libraries(mylist PUBLIC Qt5::Core)

add_executable(mystringlist mystringlist.cpp)
target_link_libraries(mystringlist PUBLIC Qt5::Core)

add_executable(myset myset.cpp)
target_link_libraries(myset PUBLIC Qt5::Core)

add_executable(myqmap myqmap.cpp)
target_link_libraries(myqmap PUBLIC Qt5::Core)

add_executable(sortcustomclass book.h book.cpp sortcustomclass.cpp)
target_link_libraries(sortcustomclass PUBLIC Qt5::Core)
