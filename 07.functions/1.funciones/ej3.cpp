/*
Escribe una función "mult". Cuando la función sea llamada - mult(); - el usuario introducirá 2
números cualesquiera, que serán multiplicados. El resultado será impreso en la consola.
*/

#include <iostream>
using namespace std;
int mult();

int mult()
{	
	int n1, n2, res;

	cout << "Introduce el primer dígito: ";
	cin >> n1;
	cout << "Introduce el segundo dígito: ";
	cin >> n2;

	res = n1 * n2;
}

main()
{
	cout << "El resultado de la multiplicación es " << mult() << "." << endl;
}
