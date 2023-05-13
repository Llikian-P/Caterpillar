cmake_minimum_required(VERSION 3.25)
project(testSDL)

set(CMAKE_CXX_STANDARD 17)

set(SDL2_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/SDL2/include)
set(SDL2_LIB_DIR ${PROJECT_SOURCE_DIR}/SDL2/lib/x64)

include_directories(${SDL2_INCLUDE_DIR})
link_directories(${SDL2_LIB_DIR})

add_executable(${PROJECT_NAME} main.cpp libs/complex_functions.cpp libs/color_functions.cpp libs/graphic_functions.cpp libs/caterpillar.cpp)

target_link_libraries(${PROJECT_NAME} SDL2main SDL2)