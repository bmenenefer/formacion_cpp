/*
Escribe un programa que solicite al usuario la entrada de un número entero. Luego el programa
calculará la suma de todos los números pares hasta el número que el usuario ingresó. Usa "con-
tinue" para saltar los números impares.

Ej: 
num_inp = 14
Salida:
0+2=2
2+4=6
6+6=12
12+8=20
20+10=30
30+12=42
42+14=56
*/

#include <iostream>
using namespace std;

int num_imp, sal;

main(void)
{
//while(true){
	cout << "Ingresa un número entero: ";
	cin >> num_imp;
	cout << endl;
	
	num_imp -= num_imp % 2;
	sal = 0;
	int tmp = 0;

	for (int i = 0; i <= num_imp; i++)
	{
		if((i % 2) != 0)
		{
			continue;
		}
		sal = tmp + i;
		cout.width(5);
		cout << tmp << " + " << i << " = " << sal << endl;
		tmp = sal;
	}
//}
}
