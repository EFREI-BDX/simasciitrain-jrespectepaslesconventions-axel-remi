cmake_minimum_required(VERSION 3.12.0)
project(simasciitrain VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES
        "src/*.cpp"
)

include_directories("include")

add_executable(simasciitrain ${SOURCES}
        include/Locomotive/ETypeLocomotive.hpp
        src/Locomotive/ETypeLocomotive.cpp
        include/Train/ITrain.hpp
        include/Train/ITrainElement.hpp
        include/Locomotive/ALocomotive.hpp
        src/Locomotive/ALocomotive.cpp
        include/Locomotive/ElectricLocomotive.hpp
        include/Locomotive/GasolineLocomotive.hpp
        src/main.cpp)
