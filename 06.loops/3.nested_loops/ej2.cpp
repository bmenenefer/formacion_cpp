/*
Escribe un programa que imprima en pantalla una representación simple de una matriz 3x3. Se
imprimirán dígitos del 1 al 9. Una vez hecho esto, el programa solicitará de forma infinita
una coordenada x y otra coordenada y en la cual se insertará una "x", de forma que se pueda 
completar el plano con ese caracter.
*/

#include <iostream>
using namespace std;

char matrix[3][3];
char value;
int x, y;

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
	
	cout << endl;
	while(true)
	{
		do{
			cout << "Inserta la coordenada X: ";
			cin >> x;
		}while((1 > x) || (x > 3));
		do{
			cout << "Inserta la coordenada Y: ";
			cin >> y;
		}while((1 > y) || (y > 3));
		value = '1';
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if((i == (x - 1)) && (j == (y - 1)))
				{
					matrix[i][j] = 'x';
				}
				else
				{	if(matrix[i][j] != 'x')
					{
						matrix[i][j] = value;
					}
				}
				value++;
				cout.width(3);
				cout << matrix[i][j];
			}
			cout << endl;
		}
	}

}
