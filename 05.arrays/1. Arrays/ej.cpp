/*
Escribe una aplicación que solicite al usuario la entrada de números. Los números introducidos
deben almacenarse en un array de 4 elementos de dobles. Los números deben ser sumados y el re-
sultado debe ser presentado en la consola así como la dirección de memoria del primer y último
elemento del array.
*/

#include <iostream>
using namespace std;
int n;
//double numbers[n];

main()
{
	cout << "Introduce el tamaño del array: ";
	cin >> n;
	
	double numbers[n];	

	for(int i = 0; i < n; i++)
	{
		cout << "Introduce el " << (i + 1) << " dígito: ";
		cin >> numbers[i];
	}
	
	double sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		sum += numbers[i];
	}
	
	cout << "La suma de todos los valores es: " << sum << endl;
	cout << "La dirección de memoria del primer valor es: " << &numbers[0] << endl;
	cout << "La dirección de memoria del último valor es: " << &numbers[n] << endl;
}
