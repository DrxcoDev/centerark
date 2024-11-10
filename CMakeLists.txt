# Configuración básica de CMake
cmake_minimum_required(VERSION 3.10)
project(GameEngine3D)

# Establece el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Lista de archivos fuente
set(SOURCES
    src/main.cpp
    src/core/engine.cpp
    src/graphics/renderer.cpp
    src/input/input.cpp
)

# Archivos de encabezados
include_directories(src src/core src/graphics src/input src/utils)

# Define el ejecutable y los archivos fuente
add_executable(GameEngine3D ${SOURCES})
