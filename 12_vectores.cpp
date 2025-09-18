#include <iostream>
#include <vector> // Directiva de vector
using namespace std;

int main() {

    /*
        * Qué es un vector 

        -- Un vector es una clase de una librería estándar de C++.
            Esta clase crea estructuras contenedoras para almacenar datos.

        -- Los vectores pueden crecer o decrecer en tamaño de forma dinámica.

        -- Tienen una sintaxis muy similar a los arrays.

        -- Proporcionan múltiples métodos para:
            - Chequear límites.
            - Conocer el tamaño.
            - Comprobar si existe un elemento.

        -- Almacenan los valores en posiciones contiguas de la memoria
            y también en posiciones separadas accesibles a través de punteros.

        * Características:

        -- Tamaño dinámico.
        -- Los elementos almacenados en su interior son del mismo tipo.
        -- Se accede a los elementos almacenados con su posición o índice.
        -- El primer elemento tiene índice cero.
        -- El último elemento tiene índice size - 1.
        -- Se suele interactuar con ellos utilizando bucles.
    */

    // ================================================================
    // Declaración e inicialización de vectores
    // ================================================================

    // Hacemos uso de la directiva vector que inicializamos en el espacio de #include.
    // Podemos darle valor de inicialización o no.

    // Declarar cinco valores sin inicializar:
    //   vector<int> casas(5);  --> crea 5 elementos con valor de 0
    //   vector<int> casas(5, 3);  --> crea 5 elementos con valor de 3
    //   vector<int> casas{1, 5, 9};  --> crea un vector con 3 elementos

    vector<int> casas(5);
    vector<int> records {2, 3, 4, 5, 7};
    vector<char> letras {'a','g','h','u','e','q','l','f','r','z'};
    vector<double> salario_base(10, 1000);

    // ================================================================
    // Uso de for para recorrer vectores
    // ================================================================
    for (int i = 0; i < 5; i++) {
        cout << endl << records[i] << endl;
    }

    for (int i = 0; i < 10; i++) {
        cout << endl << letras[i] << endl;
    }

    cout << endl << "El ciclo for solo va hasta donde se lleve "
                    << "el cual se sabe qué cantidad hay" << endl;

    for (int i = 0; i < 10; i++) {
        cout << endl << salario_base[i] << endl;
    }

    // ================================================================
    // Ciclo while
    // ================================================================
    // Mientras algo siga ocurriendo y existiendo, se ejecuta la condición.
    cout << endl << "Ciclo while: mientras i sea menor a salario_base.size() "
                    << "se seguirá ejecutando" << endl;

    int i = 0;
    while (i < salario_base.size()) {
        cout << endl << salario_base[i] << endl;
        i++;
    }

    // ================================================================
    // Uso del método at()
    // ================================================================
    // El método at() nos da una excepción si no existe el índice seleccionado.
    // En cambio, el operador [] no lanza error, pero puede provocar comportamiento inesperado.

    vector<int> houses {1, 2, 8, 3, 4, 7};

    // Podemos acceder de dos formas:
    // -- La más recomendada es con at().
    // -- La otra es la tradicional del array con [].

    // Vector sin modificar
    cout << endl << "Vector sin modificar: " << houses.at(0) << endl;

    houses.at(0) = 6;

    // Mostramos con cout, es lo mismo, también se puede usar [0].
    cout << endl << "Vector modificado: " << houses.at(0) << endl;
    cout << endl << "------------------------------------" << endl;

    // ================================================================
    // Uso de push_back()
    // ================================================================
    // Agregamos un valor al final del vector con el método push_back().
    houses.push_back(23);

    // Recorremos el vector para verificar el nuevo elemento agregado.
    for (int i = 0; i < houses.size(); i++) {
        cout << endl << "Valores del vector " << i << ": " << houses.at(i) << endl;
    }

    return 0;
}
