/*
Escribe un programa que pida al usuario su edad. Luego, usando operadores condicionales com-
probará si la edad del usuario es superior o igual a 18 años.
*/

#include <iostream>
using namespace std;

int age;
string mssg;

main()
{

	cout << "Introduce su edad: ";
	cin >> age;

	mssg = (age >= 18) ? "Es mayor de edad." : "Es menor de edad.";
	cout << mssg << endl;
	
}
