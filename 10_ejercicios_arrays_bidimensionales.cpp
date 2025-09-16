#include <iostream>
using namespace std;

int main(){
    
    //Forma tradicional
    int mi_matriz[4][5] = {
            {15, 25, 8, -7, 92},   // Fila 0
            {77, 12, 11, 7, 44},   // Fila 1
            {56, 59, 43, 78, 12},  // Fila 2
            {43, 95, 12, 87, 33}   // Fila 3
        };

    //Forma menos ordenada.
    int mi_matriz_bidimensional[4][5] = {15, 25, 8, -7, 92,77, 12, 11, 7, 44,56, 59, 43, 78, 12,43, 95, 12, 87, 33};
    
    // Valor sin modificación
    cout << endl << mi_matriz_bidimensional [0][2];
    
    // Acá podemos acceder al indíce y reasignar los valores
    mi_matriz_bidimensional[0][2] = 28;
    
    //Valor modificado
    cout << endl << mi_matriz_bidimensional [0][2];


    /*
        * Usamos for anidados para  recorrer el array 

        i = fila
        j = columna
    */
    int ages[4][5] = {
            {15, 25, 8, -7, 92},   // Fila 0 y columna 0.
            {77, 12, 11, 7, 44},   // Fila 1 y columna 1.
            {56, 59, 43, 78, 12},  // Fila 2 y columna 2
            {43, 95, 12, 87, 33}   // Fila 3 y columna 3.
        };

    for(int i = 0; int i < 4; i++){

        for(int j = 0; j < 5; j++){
            
            cin >> 
        }
    }





    
    return(0);
}