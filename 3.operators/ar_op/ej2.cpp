/*
Write a program that asks the user to input a temperature in celsius degrees. The result should
be the temperature expressed in Fahrenheit and Kelvin scales.

T(K) = T(C) + 273
T(F) = T(C)*(9/5) + 32

*/

#include <iostream>

using namespace std;

float C, K, F;

main()
{

	cout << "Introduce la temperatura en Cº: ";
	cin >> C;

	cout << "La temperatura en grados F es igual a " << C*9/5+32 << "ºF."<< endl;
	cout << "La temperatura en grados K es igual a " << C+273 << "ºK." << endl;
	cout << "FIN :-)" << endl;
}
