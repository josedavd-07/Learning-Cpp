#include <iostream>
using namespace std;

int main() {

    // ================================
    // Declaración e inicialización de un array
    // ================================
    int matriz[] {15, 20, 25};

    // Accediendo a índices del array
    cout << endl << "Primer valor matriz[0]: " << matriz[0] << endl;
    cout << endl << "Tercer valor matriz[2]: " << matriz[2] << endl;

    // Reasignación en tiempo de ejecución
    matriz[0] = 35;

    // Acceso al índice reasignado
    cout << endl << "Nuevo valor matriz[0]: " << matriz[0] << endl;


    // ================================
    // Ejemplo con array de enteros
    // ================================
    int edad[10] {1, 5, 20}; 
    // Desde el índice 3 hasta el 9 los valores son 0 automáticamente

    cout << endl << "Edad[5] antes de asignar: " << edad[5] << endl; 

    // Asignamos un valor en tiempo de ejecución
    edad[5] = 28;
    cout << endl << "Edad[5] despues de asignar: " << edad[5] << endl;


    // ================================
    // Arrays con tamaño definido por una constante
    // ================================
    const int personas {10};

    // Inicializamos el array con 10 valores
    int age[personas] {1, 52, 36, 43, 96, 85, 24, 15, 65, 71};

    // Mostramos valores iniciales
    cout << endl << "Primer valor age[0]: " << age[0] << endl;
    cout << endl << "Segundo valor age[1]: " << age[1] << endl;j

    // Reasignamos un valor desde la entrada del usuario
    cout << endl << "Introduce una edad: ";
    cin >> age[1];

    cout << endl << "La edad introducida es: " << age[1] << " Anos" << endl; 
    // Nota: escribí "Anos" para evitar problemas con la 'ñ' en la consola de Windows.

    return 0;
}
