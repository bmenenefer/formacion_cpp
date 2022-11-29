/*
Escribe un programa que solicite al usuario introducir un código pin por primera vez. Luego
usando while (o dowhile) se solicitará al usuario que introduzca de nuevo el código. Si el
código es incorrecto, el usuario deberá volverlo a introducir hasta que sea correcto. Si el
número de veces que se introduce el código pin, llega a 5, el programa se detendrá.
*/

#include <iostream>
using namespace std;

int pin1, pin2, cont;

main()
{
	cout << "Introduce un código pin: ";
	cin >> pin1;
	
	cont = 0;	

	do{
		cout << "Inserta el pin: ";
		cin >> pin2;
		cont += 1;
		//cout << "Intento número: " << cont << endl;

	}while(((pin1 != pin2) && (cont <= 4)) && cout << "Pin incorrecto. Prueba otra vez" << endl);
}
