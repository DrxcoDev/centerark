#ifndef RENDERER_H
#define RENDERER_H

#include <GLFW/glfw3.h>

class Renderer {
public:
    Renderer();
    ~Renderer();

    // Inicializa GLFW y crea una ventana
    bool init();
    void render();
    void cleanup();

    // Verifica si la ventana debe cerrar
    bool shouldClose() const;

private:
    GLFWwindow* window;
};

#endif // RENDERER_H
