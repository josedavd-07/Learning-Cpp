#include <iostream>
using namespace std;

int main() {

    /*****************************
     * 1. Declaración de arrays bidimensionales
     *****************************/

    // Forma tradicional (más clara y legible)
    int mi_matriz[4][5] = {
        {15, 25, 8, -7, 92},   // Fila 0
        {77, 12, 11, 7, 44},   // Fila 1
        {56, 59, 43, 78, 12},  // Fila 2
        {43, 95, 12, 87, 33}   // Fila 3
    };

    // Forma menos ordenada (todos los valores en una sola línea)
    int mi_matriz_bidimensional[4][5] = {15, 25, 8, -7, 92, 77, 12, 11, 7, 44, 56, 59, 43, 78, 12, 43, 95, 12, 87, 33};

    /*****************************
     * 2. Acceso y modificación de valores
     *****************************/

    // Valor original
    cout << "Valor original en [0][2]: " << mi_matriz_bidimensional[0][2] << endl;

    // Modificación de un valor
    mi_matriz_bidimensional[0][2] = 28;

    // Valor modificado
    cout << "Valor modificado en [0][2]: " << mi_matriz_bidimensional[0][2] << endl;

    /*****************************
     * 3. Recorrido de arrays con for anidados
     *****************************/

    // Declaramos otro array para practicar con la entrada de usuario
    int ages[4][5];

    //i = fila
    //j = columna

    // Llenado del array por teclado
    cout << "\n-- Introduce los valores del array bidimensional --" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Fila " << i << ", Columna " << j << ": ";
            cin >> ages[i][j];
        }
    }

    // Visualización de los valores almacenados
    cout << "\n-- Valores almacenados en el array --" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << ages[i][j] << "\t"; // Tabulación para mejor lectura
        }
        cout << endl; // Salto de línea después de cada fila
    }

    return 0;
}
