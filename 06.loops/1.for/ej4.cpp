/*
Escribe un programa que solicite al usuario insertar un número entero n. Luego calculará el re-
sultado del factorial n! e imprimirá el resultado por consola.
*/

#include <iostream>
using namespace std;

int n, tmp;

main()
{
	cout << "Introduce el valor para calcular su factorial: ";
	cin >> n;

	tmp = n;

	for (int i = (n - 1); i >= 1; i--)
	{
		tmp *= i;
	}
	cout << n << "!=" << tmp << endl;
}
