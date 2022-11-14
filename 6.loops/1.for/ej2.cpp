/*
Escribe un programa que imprima por pantalla todas las letras en mayúsculas y minúsculas del
alfabeto.
*/

#include <iostream>
using namespace std;

//char val_cap, val_low;

main()
{

	char val_cap = 'A';
	char val_low = 'a';

	for (int i = 0; i <= 25; i++)
	{
		cout << val_cap << " ";
		cout << val_low << endl;

		val_cap++;
		val_low++;
	}
}
