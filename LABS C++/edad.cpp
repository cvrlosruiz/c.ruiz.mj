#include <iostream>

using namespace std;
int main(){
    
double anonacimiento, anoactual;

cout << "Ingrese el ano en el que nacio:";
cin >> anonacimiento;


cout << "Ingrese el ano actual:";
cin >> anoactual;

int edad = anoactual - anonacimiento;

cout << "Su edad es:"<< edad << endl;


    return 0;
}
