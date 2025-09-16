#include <iostream>
using namespace std;

int main(){

    // Banner de bienvenida
    cout << endl;
    cout << "==============================================" << endl;
    cout << "   Bienvenidos al servicio de instalaciones   " << endl;
    cout << "            de ceramica Sol y Luna            " << endl;
    cout << "==============================================" << endl;
    cout << endl;


    // Miembros variables

    // Declaración de lista se puede obmitir el = y usar {}
    int  metros_calidad_media = {0};
    int  metros_calidad_premium = {0};

    // Precios por metro cuadrado
    const double precio_calidad_media {35.999};
    const double precio_calidad_premium {49.999};

    //IVA
    const double iva {0.21};

    // Expiración de presupuesto
    const int dias_expiracion {30};
    
    //------------------Ingreso de datos------------------

    cout << "Ingrese la cantidad de m2 a comprar de ceramica de calidad media: ";
    cin >> metros_calidad_media;

    cout << "Ingrese la cantidad de m2 a comprar de ceramica de calidad premium: "; 
    cin >> metros_calidad_premium;

    cout << "\n Presupuesto para la instalacion de la ceramica: \n";

    cout << "\n Número de m2 de ceramica de calidad media: " << metros_calidad_media << " m2" << endl;
    cout << "\n Número de m2 de ceramica de calidad premium: " << metros_calidad_premium << " m2" << endl;

    cout << "\n Precio de instalacion por m2 de ceramica de calidad media: " << precio_calidad_media << " USD" << endl;
    cout << "\n Precio de instalacion por m2 de ceramica de calidad premium: " << precio_calidad_premium << " USD" << endl;

    // Importe
    cout << "\n Importe: " <<endl;

    // Calcular valor neto (sin IVA)
    double valor_neto = (precio_calidad_media * metros_calidad_media) 
                  + (precio_calidad_premium * metros_calidad_premium);
                
    double importe_total = valor_neto + (valor_neto * iva);


    // Mostrar en pantalla
    cout << endl << "Valor Neto: " << valor_neto << " USD" << endl;

    // Mostrar IVA
    cout << endl << "IVA (21%): " << valor_neto * iva << " USD" << endl;

    cout << endl << "----------------------------------------------" << endl;

    cout << endl << "Importe Total: " << endl;

    cout << endl << importe_total << " USD" << endl;

    cout << endl << "----------------------------------------------" << endl;

    cout << endl << "Presupuesto válido por " << dias_expiracion << " días." << endl;

    
}