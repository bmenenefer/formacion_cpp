/*
Escribe una función "resta". Cuando la función sea llamada - resta(); - el usuario introducirá 2
números cualesquiera, que serán sumados. El resultado será impreso en la consola.
*/

#include <iostream>
using namespace std;
int resta();

int resta()
{	
	int n1, n2, res;

	cout << "Introduce el primer dígito: ";
	cin >> n1;
	cout << "Introduce el segundo dígito: ";
	cin >> n2;

	res = n1 - n2;
}

main()
{
	//int res = suma();
	cout << "El resultado de la resta es " << resta() << "." << endl;
}
