#include <iostream>

using namespace std;

int main()
{
   string nombre;
    cout << "Ingrese su nombre: "; // solicitar nombre

    getline(cin, nombre); 

      for (int i = 0; i < 10; ++i) {  // se clarifica la repeticion
        cout << "Hola " << nombre << endl;
    }

    return 0;
}