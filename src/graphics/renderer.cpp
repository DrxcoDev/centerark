#include "renderer.h"
#include <iostream>

Renderer::Renderer() : window(nullptr) {}

Renderer::~Renderer() {
    cleanup();
}

bool Renderer::init() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return false;
    }

    // Crear una ventana de 800x600
    window = glfwCreateWindow(800, 600, "Game Engine 3D", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return false;
    }

    // Configurar el contexto de OpenGL
    glfwMakeContextCurrent(window);
    return true;
}

void Renderer::render() {
    // Render loop: Limpia la pantalla con un color
    glClearColor(0.1f, 0.2f, 0.3f, 1.0f); // Color de fondo
    glClear(GL_COLOR_BUFFER_BIT);

    // Cambia el buffer de la ventana
    glfwSwapBuffers(window);
    glfwPollEvents();
}

bool Renderer::shouldClose() const {
    return glfwWindowShouldClose(window);
}

void Renderer::cleanup() {
    if (window) {
        glfwDestroyWindow(window);
    }
    glfwTerminate();
}
