#include "input.h"
#include <iostream>

Input::Input() {
    // Constructor
}

Input::~Input() {
    // Destructor
}

void Input::init() {
    // Inicialización de entradas (teclado, ratón, etc.)
    std::cout << "Input system initialized" << std::endl;
}

void Input::pollEvents() {
    // Lógica para leer entradas del usuario
    std::cout << "Polling events..." << std::endl;
}
