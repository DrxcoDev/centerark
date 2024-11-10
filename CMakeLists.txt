cmake_minimum_required(VERSION 3.10)
project(GameEngine3D)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluye GLFW y OpenGL
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Lista de archivos fuente
set(SOURCES
    src/main.cpp
    src/core/engine.cpp
    src/graphics/renderer.cpp
    src/input/input.cpp
)

include_directories(src src/core src/graphics src/input src/utils)

# Crea el ejecutable y enlaza las librerías
add_executable(GameEngine3D ${SOURCES})
target_link_libraries(GameEngine3D PRIVATE glfw OpenGL::GL)
