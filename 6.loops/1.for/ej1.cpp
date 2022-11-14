/*
Escribe un programa que le solicite al usuario introducir un numero entero. Después imprimirá
en pantalla los siguientes 100 números.
*/

#include <iostream>
using namespace std;

int val;

main()
{

	cout << "Introduce un número: ";
	cin >> val;

	for (int i = val + 1; i < (val + 101); i++)
	{
		cout << i << endl;
	}
}
