#include "engine.h"
#include <iostream>

Engine::Engine() : isRunning(false) {
    // Constructor inicializa el motor
}

Engine::~Engine() {
    // Destructor, limpiamos recursos si es necesario
}

void Engine::init() {
    // Inicializa los sistemas necesarios para el motor (gráficos, entradas, etc.)
    renderer.init();
    input.init();
}

void Engine::run() {
    isRunning = true;
    while (isRunning) {
        input.pollEvents(); // Procesamos entradas
        renderer.render();   // Renderizamos la escena
    }
}

void Engine::stop() {
    isRunning = false;
    std::cout << "Engine stopped" << std::endl;
}
