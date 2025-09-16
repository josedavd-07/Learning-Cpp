#include <iostream>
using namespace std;

// -------------------------------
// Función constexpr definida fuera del main
// -------------------------------
constexpr int cuadrado(int x) {
    return x * x;
}

int main() {

    // ===============================
    // LECCIÓN: CONSTANTES EN C++
    // ===============================

    cout << endl << "=== Constantes en C++ ===" << endl << endl;

    // 1. Constantes literales
    const int diasEnSemana = 7;
    const string mensaje = "Hola, Mundo!";

    // 2. Constantes declaradas con 'const'
    const string nombreEmpresa = "Tech Solutions";

    // 3. Expresiones constantes con 'constexpr'
    int resultado = cuadrado(5); // Ahora funciona bien ✅

    // 4. Constantes enumeradas con 'enum'
    enum Colores { ROJO, VERDE, AZUL };
    Colores colorFavorito = VERDE;

    // 5. Constantes correctas
    const double PI = 3.14159;

    // 6. Mostrar resultados
    cout << "Dias en la semana: " << diasEnSemana << endl;
    cout << "Mensaje: " << mensaje << endl;
    cout << "Empresa: " << nombreEmpresa << endl;
    cout << "Resultado constexpr: " << resultado << endl;
    cout << "Color favorito (enum): " << colorFavorito << endl;
    cout << "Constante PI: " << PI << endl << endl;

    return 0;
}
