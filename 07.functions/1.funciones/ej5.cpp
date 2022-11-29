/*
Escribe una función "pot". Cuando la función sea llamada - pot(); - el usuario introducirá 2
números cualesquiera, el primer número será elevado al segundo. El resultado será impreso en 
la consola.
*/

#include <iostream>
using namespace std;

float pot()
{	
	float tmp, n1;
	int n2;

	cout << "Introduce el primer dígito: ";
	cin >> n1;
	cout << "Introduce el segundo dígito: ";
	cin >> n2;
	tmp = 1;
	for (int i = 1; i <= n2; i++)
	{
		tmp *= n1;
	}
	return (tmp);
}

main()
{
	cout << "El resultado es: " << pot() << "." << endl;
}
