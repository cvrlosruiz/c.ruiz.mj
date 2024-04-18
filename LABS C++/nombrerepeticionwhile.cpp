#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);  

    int contador = 0;  // Inicializar un contador

        while (contador < 10){
        cout << "Hola " << nombre << endl;
        contador++;  // Incrementar el contador en cada iteración
    }

    return 0;
}