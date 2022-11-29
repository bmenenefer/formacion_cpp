#include <iostream>
using namespace std;

int main()
{
  int a[3];
  a[0] = 10;
  a[1] = 20;
  a[2] = 60;
  int *p = &a[0];

  // cout << &a[0] << endl;
  cout << p << endl; // Muestra la dirección de memoria de a[0]
  cout << *p << endl; // Muestra el valor que hay dentro de a[0]
  cout << ++*p << endl; // Incrementa el valor de a[0]
  cout << *++p << endl; // Incrementa una posición del puntero y muestra el valor que contiene
  cout << *p++ << endl; // Muestra el valor que contiene y luego incrementa la posición del puntero
  cout << *p << endl; //

}
