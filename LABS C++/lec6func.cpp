#include <iostream>

using namespace std;

double ObtenerPi()
{
    return 3.141592653589793;
}

int main ()
{
    double radio = 5;

    double area = ObtenerPi() * (radio * radio);

    cout << "El area es:"<< area <<endl;
    return 0;
}