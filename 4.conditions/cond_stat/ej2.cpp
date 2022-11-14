/*
Write a program that asks the user to input three integer numbers. The first two should be 
the maximum and the minimun of a interval. Then the program should check if the third number
is contained within the interval. The user should be informed if the number belongs or if it
doesn't belong to the interval.
*/

#include <iostream>

using namespace std;

int max_val, min_val, val_chk;

main()
{

	cout << "Introduce el valor mínimo del intervalo: ";
	cin >> min_val;
	cout << "Introduce el valor máximo del intervalo: ";
	cin >> max_val;
	if(min_val >= max_val){
		cout << "El valor máximo no puede ser menor que el mínimo." << endl;
		cout << "El programa finalizará de forma inmediata." << endl;
	}
	else{
		cout << "Introduce el valor a revisar: ";
		cin >> val_chk;

		if (val_chk >= min_val && val_chk <= max_val){
			cout << "El valor introducido pertenece al intervalo." << endl;
		}
		else{
			cout << "El valor introducido no pertenece al intervalo." << endl;
		}	
	}
}
