#include <iostream>  // Biblioteca estándar para entrada y salida
using namespace std;

int main() {

    // ===============================
    // 1. Declaración e inicialización de variables
    // ===============================

    string nombre = "Juan";   // Variable tipo string (cadena de texto)
    int edad {25};            // Declaración con lista de inicialización
    double salario;           // Declaración sin inicialización (se asigna después)

    // ===============================
    // 2. Banner de presentación
    // ===============================
    cout << endl << "----------------------------------" << endl;

    // ===============================
    // 3. Entrada de datos con cin
    // ===============================
    cout << endl << ">> Introduce el salario del empleado: ";
    cin >> salario;  // Entrada de datos (salario)

    cout << endl << "Introduce la edad del empleado: ";
    cin >> edad;     // Entrada de datos (edad)

    // Reasignación de valor a la variable
    nombre = "Juan 1";

    // ===============================
    // 4. Salida de datos con cout
    // ===============================
    cout << endl << "Datos del empleado:" << endl;
    cout << endl 
        << "Nombre: " << nombre 
        << ". Edad: " << edad 
        << ". Salario: " << salario << " USD" 
        << endl;

    return 0; // Fin del programa
}
