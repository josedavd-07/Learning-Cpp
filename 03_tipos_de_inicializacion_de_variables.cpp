#include <iostream>
using namespace std;

int main() {

    // Variable declarada sin asignar valor
    int edad;
    edad = 25; // Asignación posterior de su valor

    // Variable declarada y asignada en la misma línea
    // Forma tradicional de inicializar valores.
    // Puede ocasionar pérdida de precisión (narrowing conversion).
    int age = 30;

    // Inicialización con constructor
    int z(5); // Otra forma de inicialización

    // Inicialización con listas (C++11 en adelante)
    int x{5}; // Forma más segura de inicialización

    return 0;
}
