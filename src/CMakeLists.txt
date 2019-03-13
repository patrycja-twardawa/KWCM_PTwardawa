project (PierwszyProgram)
add_executable(Lab1 main.cpp)
cmake_minimum_required (VERSION 2.8)

include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory (Trygonometria)
target_link_libraries (Lab1 Trygonometria)