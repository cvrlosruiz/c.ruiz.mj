#include <iostream>
using namespace std;

int main() {
   
    bool esMiembroDelTeatro;
    int numEntradas;
    double precioTotal;

    // Solicitar información al usuario
    cout << "¿Eres miembro del teatro? (1 para Sí, 0 para No): ";
    cin >> esMiembroDelTeatro;
    cout << "Ingrese la cantidad de entradas que desea comprar: ";
    cin >> numEntradas;

    // se aplican los descuentos
    if (esMiembroDelTeatro) {
        if (numEntradas > 5) {

            precioTotal = numEntradas * 10 * 0.85;
        } else {
            
            precioTotal = numEntradas * 10 * 0.9;
        }
    } else {
        if (numEntradas > 10) {
            
            precioTotal = numEntradas * 10 * 0.95;
        } else {
            
            precioTotal = numEntradas * 10;
        }
    }

    // Se muestra el precio final a pagar
    cout << "El precio total a pagar es: $" << precioTotal << endl;

    return 0;
}