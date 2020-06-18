cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(zet_5 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(file_size file_size.cpp)
target_link_libraries(file_size PUBLIC Qt5::Core)

add_executable(read_file read_file.cpp)
target_link_libraries(read_file PUBLIC Qt5::Core)

add_executable(write2file write2file.cpp)
target_link_libraries(write2file PUBLIC Qt5::Core)

add_executable(copy_file copy_file.cpp)
target_link_libraries(copy_file PUBLIC Qt5::Core)

add_executable(owner owner.cpp)
target_link_libraries(owner PUBLIC Qt5::Core)

add_executable(file_times file_times.cpp)
target_link_libraries(file_times PUBLIC Qt5::Core)

add_executable(dirs dirs.cpp)
target_link_libraries(dirs PUBLIC Qt5::Core)

add_executable(special_paths special_paths.cpp)
target_link_libraries(special_paths PUBLIC Qt5::Core)

add_executable(file_path file_path.cpp)
target_link_libraries(file_path PUBLIC Qt5::Core)

add_executable(permissions permissions.cpp)
target_link_libraries(permissions PUBLIC Qt5::Core)

add_executable(list_dir list_dir.cpp)
target_link_libraries(list_dir PUBLIC Qt5::Core)
