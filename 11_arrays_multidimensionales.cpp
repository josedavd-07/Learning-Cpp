#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    // Inicializamos la semilla aleatoria UNA sola vez
    srand(time(0));
    
    // Usamos un array tridimensional para almacenar la cantidad de coches
    // pasoCoches[hora][día][mes]
    int pasoCoches[24][31][12];

    // Ciclos for anidados en las tres dimensiones
    for (int i = 0; i < 24; i++) {         // Horas
        for (int j = 0; j < 31; j++) {     // Días
            for (int z = 0; z < 12; z++) { // Meses
                // Valores entre 1 y 1000
                pasoCoches[i][j][z] = (rand() % 1000) + 1;  
            }
        }
    }

    // Ejemplo: 7 de noviembre a las 19:00
    // Nota: los índices comienzan en 0 → día 7 = índice 6, mes 11 = índice 10
    int datos = pasoCoches[19][6][10];

    cout << endl << "Los coches que pasaron el 7 de noviembre a las 19:00 fueron: " 
            << datos << endl;

    return 0;
}
