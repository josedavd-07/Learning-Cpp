#include <iostream>
#include <cstdlib>  // para rand() y srand()
#include <ctime>    // para time()
using namespace std;

int main(){
    srand(time(0)); //inicializa la semilla aleatoria UNA sola vez
    
    // usammos arrays multidimensionales para almaccenar fechas
    // horas - dias - meses

    int pasoCoches[24][31][12];

    //Ciclo for  anidados en las tres dimensiones

    for(int i = 0; i < 24; i++){

        for(int j = 0; j < 31; j++ ){

            for(int z = 0; z < 12; z++){

                pasoCoches[i][j][z]= (rand() % 1000) + 1;  // valores entre 1 y 1000
;

            }
        }
    }

    // 7 de noviembre a las 19:00

    int datos = pasoCoches[19][06][10];

    cout << endl << "Los numeros de coches que pasaron el 7 de noviembre a las 19:00 fueron: " << datos << endl;

    return(0);
}