/*
	Write a program that asks the user to input three integer numbers. The first two
should represent the minimum and the maximum value of the interval respectively. Then the
program should check if the third number is in the interval of the minimum value and the 
maximum value. The result should be expressed with a sentences and logical result using 
boolean type variable.
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

	cout << "¿El valor pertenece al intervalo establecido? " << bool (valor >= min_val && valor <= max_val) << endl;
}
