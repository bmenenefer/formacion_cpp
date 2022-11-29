/*
Escribe un programa que imprima en pantalla una representación simple de una matriz 3x3. Se
imprimirán dígitos del 1 al 9. Una vez hecho esto, el programa solicitará de forma infinita
una coordenada x y otra coordenada y en la cual se insertará una "x" o un "o", como en el 3 
en raya. Ya que el código previene de que se inserten coordenadas > 3 y < 1, asumimos que el
ejercicio 4 ya está hecho. En la celda que ya exista una "x" no se podrá insertar "o" y vice-
versa.
*/

#include <iostream>
using namespace std;

char matrix[3][3];
char value, val;
int x, y;

int main(void)
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
	
	bool turno_1 = true;	
	int cont1 = 1;	

	while(true)
	{
		string mssg = ((turno_1 == true) ? "¡Turno del jugador 1!" : "¡Turno del jugador 2!");
		cout << mssg << endl;

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
					val = (turno_1 == true ? 'x' : 'o');	
					if(matrix[i][j] != 'o' && matrix[i][j] != 'x')
					{
						matrix[i][j] = val;
						turno_1 = !turno_1;
						cont1 += 1;
					}
				}
				else
				{	if(matrix[i][j] != 'x' && matrix[i][j] != 'o')
					{
						matrix[i][j] = value;
					}
				}
				value++;
				cout.width(3);
				cout << matrix[i][j];
				if(cont1 == 10)
				{
					cout << endl;
					cout << "FIN" << endl;
					return 0;
				}
			}
			cout << endl;
		}
	}

}
