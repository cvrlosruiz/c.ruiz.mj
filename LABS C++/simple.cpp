#include <iostream>
#include <string>

using namespace std;

int main() {
    string estadotarjeta;

    // Se le pide el estado de cuenta al usuario
    cout << "Ingrese el estado de su cuenta (activa/inactiva): ";
    cin >> estadotarjeta;

    // Verificar si la tarjeta está activa
    if (estadotarjeta == "activa") {
        cout << "Puedes realizar prestamos." << endl;

    } if (estadotarjeta == "inactiva") {
        cout << "No puedes realizar prestamos." << endl;
    }

    return 0;
}