#include <iostream>

using namespace std;

int main() {
    double suma = 0;
    double temperatura;
    int contador = 0;

    do {
        cout << "Ingrese la temperatura del mes " << contador + 1 << ": ";
        cin >> temperatura;
        suma += temperatura;
        contador++;
    } while (contador < 12);

    double promedio = suma / 12;
    cout << "El promedio de las temperaturas es: " << promedio << endl;

    return 0;
}