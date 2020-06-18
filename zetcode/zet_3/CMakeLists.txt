cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_3 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(init init.cpp)
target_link_libraries(init PUBLIC Qt5::Core)

add_executable(curdatetime curdatetime.cpp)
target_link_libraries(curdatetime PUBLIC Qt5::Core)

add_executable(comparedates comparedates.cpp)
target_link_libraries(comparedates PUBLIC Qt5::Core)

add_executable(leapyear leapyear.cpp)
target_link_libraries(leapyear PUBLIC Qt5::Core)

add_executable(dateformats dateformats.cpp)
target_link_libraries(dateformats PUBLIC Qt5::Core)

add_executable(customdateformats customdateformats.cpp)
target_link_libraries(customdateformats PUBLIC Qt5::Core)

add_executable(timeformats timeformats.cpp)
target_link_libraries(timeformats PUBLIC Qt5::Core)

add_executable(customtimeformats customtimeformats.cpp)
target_link_libraries(customtimeformats PUBLIC Qt5::Core)

add_executable(weekday weekday.cpp)
target_link_libraries(weekday PUBLIC Qt5::Core)

add_executable(nofdays nofdays.cpp)
target_link_libraries(nofdays PUBLIC Qt5::Core)

add_executable(validity validity.cpp)
target_link_libraries(validity PUBLIC Qt5::Core)

add_executable(daystofrom daystofrom.cpp)
target_link_libraries(daystofrom PUBLIC Qt5::Core)

add_executable(datetime datetime.cpp)
target_link_libraries(datetime PUBLIC Qt5::Core)

add_executable(julianday julianday.cpp)
target_link_libraries(julianday PUBLIC Qt5::Core)

add_executable(battles battles.cpp)
target_link_libraries(battles PUBLIC Qt5::Core)

add_executable(utclocal utclocal.cpp)
target_link_libraries(utclocal PUBLIC Qt5::Core)

add_executable(unixepoch unixepoch.cpp)
target_link_libraries(unixepoch PUBLIC Qt5::Core)
