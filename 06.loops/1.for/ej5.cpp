/*
Escribe un programa que solicite al usuario insertar un número entero. El programa deberá
imprimir en pantalla tantos * como el número introducido en líneas de 5

U.i.: 20
Output:
*****
*****
*****
*****
*/

#include <iostream>
using namespace std;

int n;
char str[20][20];

main()
{
	cout << "Introduce un número entero: ";
	cin >> n;	
	
	int tmp = 1;

	for(int i = 0; i < n; i++)
	{
		if(tmp > 5)
		{
			tmp = 1;
			cout << endl;
		}
		
		cout << "*";
		tmp += 1;		
	}
	cout << endl;
}
