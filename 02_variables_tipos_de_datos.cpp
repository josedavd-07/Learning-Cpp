#include <iostream>
using namespace std;

int main() {

    // -------------------------------------------------------
    // 1. Variables y tipos de datos  en C++
    // Sintaxis: tipo_de_dato nombre_variable = valor;
    // -------------------------------------------------------

    // Ejemplo de variable de tipo entero (int)
    int numero = 10;

    // -------------------------------------------------------
    // 2. Modificadores de tipos
    // unsigned -> solo números positivos
    // signed   -> permite positivos y negativos (por defecto)
    // -------------------------------------------------------
    
    unsigned int valorPositivo = 1; // solo positivos
    int valorNegativo = -5;         // positivos y negativos


    // -------------------------------------------------------
    // 3. Tipos enteros
    // -------------------------------------------------------

    short int varShortInt = 5;       // 2 bytes
    short varShort = 10;             // equivalente a short int
    int varInt = 100;                // 4 bytes (tamaño estándar)
    long int varLongInt = 50000;     // 4 bytes
    long varLong = 100000;           // equivalente a long int
    long long varLongLong = 1000000000; // 8 bytes


    // -------------------------------------------------------
    // 4. Tipos decimales (punto flotante)
    // -------------------------------------------------------

    float decimalFloat = 5.99f;   // 4 bytes
    double decimalDouble = 9.98;  // 8 bytes


    // -------------------------------------------------------
    // 5. Tipos de caracteres y cadenas
    // -------------------------------------------------------

    char caracter = 'A';          // 1 byte (comillas simples)
    string texto = "Hola Mundo";  // ocupa 1 byte por caracter


    // -------------------------------------------------------
    // 6. Tipo booleano
    // -------------------------------------------------------

    bool booleano = true;
    bool falso = false;


    // -------------------------------------------------------
    // 7. Imprimir variables en consola
    // -------------------------------------------------------
    
    cout << endl << "--- Demostración de variables y tipos de datos en C++ ---" << endl << endl;

    cout << "Variable int: " << numero << endl;
    cout << "Variable float: " << decimalFloat << endl;
    cout << "Variable double: " << decimalDouble << endl;
    cout << "Variable char: " << caracter << endl;
    cout << "Variable string: " << texto << endl;
    cout << "Variable boolean true: " << booleano << endl;
    cout << "Variable boolean false: " << falso << endl;
    cout << "Edad (int sin valor inicial, luego asignado): " << edad << endl;
    cout << "Age (int declarado y asignado): " << age << endl;
    cout << "Short int: " << varShortInt << endl;
    cout << "Long long int: " << varLongLong << endl;

    return 0;
}
