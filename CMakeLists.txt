cmake_minimum_required (VERSION 3.0)
project (giac)

file(GLOB_RECURSE sources src/*.cpp src/*.cc src/*.cxx)

include_directories(src)
add_library(giac STATIC ${sources} ${headers})

target_compile_options(giac PUBLIC -std=c++1y -Wall)
target_include_directories(giac PUBLIC src)

target_link_libraries (giac)
