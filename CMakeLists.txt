cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_compile_options(
        -Wall             # Enable all basic warnings
        -Wextra           # Enable extra warnings
        -Wpedantic        # Enable pedantic warnings
        -Werror           # Treat warnings as errors
)

include_directories(include)

add_subdirectory(arrays)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE arrays)