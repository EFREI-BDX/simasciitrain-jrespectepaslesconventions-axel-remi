cmake_minimum_required(VERSION 3.12.0)
project(simasciitrain VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES
        "src/*.cpp"
)

include_directories("include")

add_executable(simasciitrain ${SOURCES})
