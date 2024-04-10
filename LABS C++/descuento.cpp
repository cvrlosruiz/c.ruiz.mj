#include <iostream>
using namespace std;

int main() {
    
    double totalCompras;
    char tieneTarjetaVIP;

    // se le solicita la informacion necesaria para obtener el descuento
    cout << "Ingrese su total de compras  $";
    cin >> totalCompras;
    cout << "¿El cliente tiene tarjeta de membresía VIP? (Si o No): ";
    cin >> tieneTarjetaVIP;

    // evaluamos si es apto a recibir el descuento
    if (totalCompras >= 150 || (tieneTarjetaVIP == 'Si' || tieneTarjetaVIP == 'si')) {
        cout << "El cliente debe recibir descuento especial.\n";
    } else {
        cout << "El cliente no debe recibir el descuento especial.\n";
    }

    return 0;
}