/*
Crea un array de dos dimensiones 3x3 de enteros. El programa solicitará al usuario que intro-
duzca dos números x e y (del 1 al 3). El programa mostrará en consola el valor que está alma-
cenado en la posición x,y del array. Tenga en consideración que las coordenadas empezarán a
contar desde el 1.
*/

#include <iostream>
using namespace std;

int val[3][3];
int x, y;

main()
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "Introduce el valor " << i + 1 << "x" << j + 1 << ": ";
			cin >> val[i][j];
		}
	}
	
	do{
		cout << "Introduce la posición x (números del 1 al 3): ";
		cin >> x;
	}while((x < 1) || (x > 3));

	do{
		cout << "Introduce la posición y (números del 1 al 3): ";
		cin >> y;
	}while((y < 1) || (y > 3));

	cout << val[x-1][y-1] << endl;

}
