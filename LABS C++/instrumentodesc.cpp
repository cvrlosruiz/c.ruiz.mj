#include <iostream>

using namespace std;

int main ()

{
//mostrar menu de opciones al usuario
int opcion;

    cout<<"Ingresa uno de los instrumentos:"<<endl;
    cout<<"1. Guitarra"<<endl;
    cout<<"2. Piano"<<endl;
    cout<<"3. Baterias"<<endl;
    cout<<"4. Violines"<<endl;
    cout<<"5. Flautas"<<endl;
    cin >> opcion;

    switch (opcion)

    {
            case 1: 
                cout<<"Las guitarras tienen un 10% de descuento"<<endl;
                break;
            
            case 2:
                cout<<"Los pianos tienen un 15% de descuento"<<endl;
                break;
            
            case 3:
                cout<<"Las baterias tienen un 20% de descuento"<<endl;
                break;

            case 4:
                cout<<"Los violines tienen un 12% de descuento"<<endl;
                break;

            case 5:
                cout<<"Las flautas tienen un 8% de descuento."<<endl;
                break;

            default://muestra mensaje en caso de opcion invalida
                cout<<"Opcion no valida, ingrese uno de los instrumento mostrados."<<endl;



    }

            return 0;

}