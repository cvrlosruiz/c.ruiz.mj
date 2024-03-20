#include <iostream>

using namespace std;
int main(){
    
double base, altura;

cout << "Ingrese la base de su rectangulo:";
cin >> base;

cout << "Ingrese la altura de su rectangulo: ";
cin >> altura;

double perimetro = 2 * altura + 2 * base;

cout << "El perimetro de su rectangulo es: "<< perimetro<<endl;


    return 0;

}