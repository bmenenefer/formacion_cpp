/*
Escribe un programa que solicite al usuario la entrada  de cualquier número, entero o de coma
flotante, y la potencia n-ésima a la cuál será elevado el número. Luego calculará el resultado
de la exponenciación del número a la potencia dada.
*/

#include <iostream>
using namespace std;

int n;
float val, tmp;

main()
{

	cout << "Introduce el número para elevar: ";
	cin >> val;
	cout << "Introduce la potencia: ";
	cin >> n;
	
	tmp = val;
	
	for(int i = 2; i <= n; i++)
	{
		tmp *= val;
		//cout << tmp << " " << i << endl;
	}
	
	cout << val << "^" << n << "=" << tmp << endl;
}
