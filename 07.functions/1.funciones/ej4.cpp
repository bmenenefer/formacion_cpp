/*
Escribe una función "div". Cuando la función sea llamada - div(); - el usuario introducirá 2
números cualesquiera, que serán divididos. El resultado será impreso en la consola.
*/

#include <iostream>
using namespace std;

float div()
{	
	float n1, n2;

	cout << "Introduce el primer dígito: ";
	cin >> n1;
	cout << "Introduce el segundo dígito: ";
	cin >> n2;

	return (n1 / n2);
}

main()
{
	cout << "El resultado de la multiplicación es " << div() << "." << endl;
}
