#include <iostream>

using namespace std;
int main()
{
    
    double velocidad, tiempo;

    cout<<"Ingrese la velocidad promedio (en m/h):";
    cin >> velocidad;

     cout<<"Ingrese el tiempo de viaje (horas):";
    cin >> tiempo;

    double distancia = velocidad * tiempo;

    cout<<"La distancia total recorrida en el viaje es "<< distancia << "millas" << endl;

    return 0;
}