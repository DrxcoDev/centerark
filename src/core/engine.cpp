#include "engine.h"
#include <iostream>

Engine::Engine() : isRunning(false) {}

Engine::~Engine() {}

void Engine::init() {
    if (!renderer.init()) {
        std::cerr << "Failed to initialize renderer" << std::endl;
        return;
    }
    isRunning = true;
}

void Engine::run() {
    while (isRunning && !renderer.shouldClose()) {
        renderer.render();
    }
}

void Engine::stop() {
    isRunning = false;
    renderer.cleanup();
    std::cout << "Engine stopped" << std::endl;
}
