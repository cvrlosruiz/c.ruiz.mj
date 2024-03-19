#include <iostream>

using namespace std;
int main()
{
  double celsius, farenheit;

  cout<<"Ingrese la temperatura en grados Celsius:";
  cin >> celsius;

  farenheit = celsius *  9/5 +32;
   cout<<"La temperatura entrada en grados celsius es equivalente a " <<farenheit<< " grados farenheit." <<endl;

    return 0;
}