/*
	Write a program that asks the user to input three integer numbers. The first two
should represent the minimum and the maximum value of the interval respectively. Then the
program should check if the third number is greater or equal to the minimum value and if it
is lower or equal to the maximum value. The result should be expressed with two sentences and
logical result using boolean type variable.
*/

#include <iostream>

using namespace std;

int max_val, min_val, valor;

main()
{
	do{
		cout << "Introduce el valor mínimo del intervalo: ";
		cin >> min_val;
		cout << "Introduce el valor máximo del intervalo: ";
		cin >> max_val;
	}
	while(min_val>=max_val && cout << "Valores erróneos" << endl);

	cout << "Introduce el valor a comparar: ";
	cin >> valor;

	cout << "¿Es el valor mayor que el mínimo establecido? " << bool (valor >= min_val) << endl;
	cout << "¿Es el valor menor que el máximo establecido? " << bool (valor <= max_val) << endl;
}
