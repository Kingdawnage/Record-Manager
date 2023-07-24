cmake_minimum_required(VERSION 3.0)

project("Record_Manager")

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "src/*.cpp")

add_executable("Record_Manager" ${SOURCES})

target_include_directories(Record_Manager PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/" )