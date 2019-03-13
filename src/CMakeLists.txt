project (PierwszyProgram)
add_executable(Lab1 main.cpp)
cmake_minimum_required (VERSION 2.8)

option (USE_TRIGONOMETRY_DEGREE "Czy argumentami funkcji trygonometrycznych sa stopnie" ON)

if (USE_TRIGONOMETRY_DEGREE)
include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory (Trygonometria)
target_link_libraries (Lab1 Trygonometria)
endif (USE_TRIGONOMETRY_DEGREE)

configure_file (
"${PROJECT_SOURCE_DIR}/Lab1Config.h.in"
"${PROJECT_BINARY_DIR}/Lab1Config.h"
)

include_directories("${PROJECT_BINARY_DIR}")
