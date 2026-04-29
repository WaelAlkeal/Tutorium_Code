cmake_minimum_required(VERSION 3.17)
project(Tutorium)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tutorium main.cpp
)

include_directories(src)
add_subdirectory(src)

add_subdirectory(test)

target_link_libraries(Tutorium src)