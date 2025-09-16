#include <iostream>
using namespace std;

int main() {

    /**
     * Arreglos o arrays
     * -----------------
     * ¿Qué es un arreglo?
     * → Es una estructura de datos que contiene una colección de datos del mismo tipo.
     * 
     * ¿Para qué usarlo?
     * → Para almacenar valores que normalmente tienen alguna relación entre sí.
     * 
     * Sintaxis:
     * tipo_dato nombre_arreglo[tamaño];
     * 
     * Ejemplo:
     * int mi_matriz[n];   // n = cantidad de elementos
     * 
     * Importante:
     * - Los arrays NO son dinámicos en C++, su tamaño es fijo.
     * - A diferencia de los vectores (std::vector) que sí son dinámicos.
     */

    // ==========================
    // DECLARACIÓN E INICIALIZACIÓN
    // ==========================
    int mi_matriz[5] {1, 2, 3, 4, 5}; 
    // Se inicializan los 5 valores del array

    int mi_matriz2[5] {1, 2}; 
    // Solo se inicializan los dos primeros valores, el resto quedan en 0

    // ==========================
    // INICIALIZAR TODOS LOS ELEMENTOS CON EL MISMO VALOR
    // ==========================
    const int TAM = 20; 
    int salarios[TAM] {1000}; 
    // Todos los 20 valores del array se inicializan en 1000

    // ==========================
    // ARRAY SIN ESPECIFICAR TAMAÑO
    // ==========================
    int mi_matriz3[] {1, 2, 3, 4, 5}; 
    // El compilador deduce el tamaño (5 elementos)

    // ==========================
    // ACCESO A LOS ELEMENTOS (ÍNDICES)
    // ==========================
    // Nota: Los arrays comienzan en índice 0 (no en 1).
    int numeros[5]; // Declaramos un array de 5 enteros

    // Almacenamos valores en cada posición
    numeros[0] = 15;   // Posición 0
    numeros[1] = 25;   // Posición 1
    numeros[2] = 8;    // Posición 2
    numeros[3] = -7;   // Posición 3
    numeros[4] = 92;   // Posición 4

    // ==========================
    // IMPRIMIR LOS VALORES
    // ==========================
    cout << "Acceso a los valores del array:" << endl;
    cout << "numeros[0] => " << numeros[0] << endl;
    cout << "numeros[1] => " << numeros[1] << endl;
    cout << "numeros[2] => " << numeros[2] << endl;
    cout << "numeros[3] => " << numeros[3] << endl;
    cout << "numeros[4] => " << numeros[4] << endl;

    return 0;
}
