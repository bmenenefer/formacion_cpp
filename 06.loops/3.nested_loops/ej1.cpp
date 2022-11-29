/*
Escribe un programa que imprima en pantalla una representación simple de una matriz 3x3. Se
imprimirán dígitos del 1 al 9
*/

#include <iostream>
using namespace std;

char matrix[3][3];
char value;

main()
{
	value = '1';

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			matrix[i][j] = value;
			value++;
			
			cout.width(3);
			cout << matrix[i][j];
		}
		
		cout << endl;
	}

}
