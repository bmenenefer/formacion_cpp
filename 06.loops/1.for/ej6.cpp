/*
Escribe un programa que solicite al usuario introducir 5 números enteros (se almacenarán en un
array de 5 elementos). Luego se verificará si los números introducidos son par o impar e impri-
mirá la información en la pantalla.
*/

#include <iostream>
using namespace std;

int values[5];

main()
{
	for(int i = 0; i < 5; i++)
	{
		cout << "Introduce el número " << (i + 1) << ": ";
		cin >> values[i];
	}

	for(int i = 0; i <= 4; i++)
	{
		if((values[i] % 2) == 0)
		{
			cout << "El número " << values[i] << " es par." << endl;
		}
		else
		{
			cout << "El número " << values[i] << " es impar." << endl;
		}
	}
}
