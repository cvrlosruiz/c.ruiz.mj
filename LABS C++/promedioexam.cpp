#include <iostream>

using namespace std;
int main()
{
   double exam1, exam2, exam3, exam4;

   cout <<"Ingrese la nota del primer examen:";
    cin >> exam1;

    cout <<"Ingrese la nota del segundo examen:";
    cin >> exam2;

    cout <<"Ingrese la nota del tercer examen:";
    cin >> exam3;

    cout <<"Ingrese la nota del cuarto examen:";
    cin >> exam4;

    double resultado = exam1 + exam2 + exam3 + exam4;

    double promedio = resultado /4;

    cout<<"Mi promedio es:" <<promedio << endl;

    return 0;
}