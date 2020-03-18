cmake_minimum_required(VERSION 3.10)

project(Main)
set(CMAKE_CXX_STANDARD 11)

file(GLOB source ${PROJECT_SOURCE_DIR}/src/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)


add_executable(Main Main.cpp ${source})

add_compile_options(-Wall)