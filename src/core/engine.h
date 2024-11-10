#ifndef ENGINE_H
#define ENGINE_H

#include "graphics/renderer.h"
#include "input/input.h"

class Engine {
public:
    Engine();
    ~Engine();

    // Inicialización
    void init();

    // Bucle principal del motor
    void run();

    // Detener el motor
    void stop();

private:
    bool isRunning;
    Renderer renderer; // Gestión de gráficos
    Input input;       // Gestión de entradas
};

#endif // ENGINE_H
