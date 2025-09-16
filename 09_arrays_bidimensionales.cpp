#include <iostream> 
using namespace std; 

int main() {

    /*
        Los arrays bidimensionales son aquellos que necesitan **dos índices** para acceder
        a un valor. Es decir, ya no basta con un solo índice (como en los unidimensionales),
        sino que ahora usamos **fila** y **columna**.

        Ejemplo:
        [i][j]
        - El primer índice (i) representa la fila.
        - El segundo índice (j) representa la columna.

        // Declaración e inicialización de un array bidimensional:
        int mi_matriz[4][5] = {
            {15, 25, 8, -7, 92},   // Fila 0
            {77, 12, 11, 7, 44},   // Fila 1
            {56, 59, 43, 78, 12},  // Fila 2
            {43, 95, 12, 87, 33}   // Fila 3
        };

        Ejemplo de acceso:
        - Si queremos acceder al número 11:
            mi_matriz[1][2] = 11
            (Fila 1,     Columna 2)

        Ejemplo de modificación:
            mi_matriz[0][0] = 99;   // Cambiamos el valor en la posición [0][0]

        Ejemplo de acceso después de la modificación:
            cout << mi_matriz[0][0];   // Imprime 99
    */

    return 0;
}
