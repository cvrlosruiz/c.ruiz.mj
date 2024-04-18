#include <iostream>

using namespace std;

int Sumar(int a, int b)
{
    return a + b;
}

int main()
{
    int resultado = Sumar(5,7);

    cout<<"La suma es:"<< resultado << endl;
    return 0 ;

}