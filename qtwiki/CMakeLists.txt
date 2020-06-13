cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(qt_beginner LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)

# set(project_ui
#     mainwindow.ui)

# set(project_headers
#     window.h)

set(project_sources
    # window.cpp
    main.cpp
    )

# qt5_wrap_ui(ui_wrap ${project_ui})
# qt5_wrap_cpp(moc_sources ${project_headers})

add_executable(${PROJECT_NAME}
    # ${project_headers}
    ${project_sources}
    # ${moc_sources}
    # ${ui_wrap}
    )

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets)

