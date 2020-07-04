cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(bogo_9 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(exists exists.cpp)
target_link_libraries(exists PUBLIC Qt5::Core)

add_executable(drives drives.cpp)
target_link_libraries(drives PUBLIC Qt5::Core)

add_executable(mkpath mkpath.cpp)
target_link_libraries(mkpath PUBLIC Qt5::Core)

add_executable(fileinfolist fileinfolist.cpp)
target_link_libraries(fileinfolist PUBLIC Qt5::Core)
