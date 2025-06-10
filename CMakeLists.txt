cmake_minimum_required(VERSION 3.14)

project(to-do_qt_app)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt automatic handling
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Find Qt5 modules
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Find Qt resource files
set(RESOURCE_FILES
    assets/resources.qrc
)

file(GLOB_RECURSE SRC_FILES
    ${CMAKE_SOURCE_DIR}/main.cpp
    ${CMAKE_SOURCE_DIR}/MainWindow.cpp
    ${CMAKE_SOURCE_DIR}/MainWindow.hpp
    ${CMAKE_SOURCE_DIR}/ui/**/*.cpp
    ${CMAKE_SOURCE_DIR}/ui/**/*.hpp
)


add_executable(
    ${PROJECT_NAME}
    ${SRC_FILES}
    ${RESOURCE_FILES}
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/core
    ${CMAKE_SOURCE_DIR}/ui/login
)

target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Widgets
)   