/*
	Write a program that asks the user to input two numbers and calculates ther sum.
	Print the result.
*/

#include <iostream>

using namespace std;

double a, b;
int c, d;

main()
{

	cout << "Introduce el primer número para sumar: ";
	cin >> a;
	c = a;
	cout << "Introduce el segundo número para sumar: ";
	cin >> b;
	d=b;

	cout << "El resultado de a + b es igual a " << a + b << endl;
	cout << "El resultado de a - b es igual a " << a - b << endl;
	cout << "El resultado de a * b es igual a " << a * b << endl;
	if (b==0)
	{
		cout << "No es posible dividir entre 0." << endl;
	}
	else
	{
		cout << "El resultado de a / b es igual a " << a / b << endl;
		cout << "El resto de a / b es igual a " << c % d << endl;
	}
}
