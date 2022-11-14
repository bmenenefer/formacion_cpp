/*
Escribe un programa que al introducir el mes, indicará los días que tiene ese mes.
En caso de febrero, solicitará también el año, para decidir si es bisiesto.

Un año bisiesto es aquel que es divisible entre 4, excepto que sea divisible entre 100 (ej.
año 1900) pero si ese año aunque sea divisible entre 100, es divisible por 400 (1600) si
es bisiesto.
Es decir:
	¿Es divisible entre 400?
		Si. Es bisiesto
		No. ¿Es divisible entre 100?
			Si. No es bisiesto.
			No. ¿Es divisible entre 4?
				Si. Es bisiesto.
				No. No es bisiesto.
*/

#include <iostream>

using namespace std;

string month[12];
int days[12];
int year, cho_mod, D400, D100, D4;
bool A, B, C;

main()
{
	month[0] = "Enero"; 
	month[1] = "Febrero";
	month[2] = "Marzo";
	month[3] = "Abril";
	month[4] = "Mayo";
	month[5] = "Junio";
	month[6] = "Julio";
	month[7] = "Agosto";
	month[8] = "Septiembre";
	month[9] = "Octubre";
	month[10] = "Noviembre";
	month[11] = "Diciembre";

	days[0] = 31;
	days[1] = 0;
	days[2] = 31;
	days[3] = 30;
	days[4] = 31;
	days[5] = 30;
	days[6] = 31;
	days[7] = 31;
	days[8] = 30;
	days[9] = 31;
	days[10] = 30;
	days[11] = 31;
	
	do{
		cout << "Introduce el mes deseado (números del 1 al 12): ";
		cin >> cho_mod;
	}while((cho_mod < 1 || cho_mod > 12) && cout << "El valor introducido no es válido." << endl);
	
	switch(cho_mod)
	{
		case 2:
		{
			cout << "Introduce el año deseado: ";
			cin >> year;
			
			D400 = year % 400;
			D100 = year % 100;
			D4 = year % 4;

			A = D400 == 0;
			B = D100 == 0;
			C = D4 == 0;
/*			
			cout << A << endl;
			cout << B << endl;
			cout << !B << endl;
			cout << C << endl;
*/			
			if ((A || (!B && C)) == true)
			{
				cout << "Febrero de " << year << " tuvo 29 días." << endl;
			}
			else
			{
				cout << "Febrero de " << year << " tuvo 28 días." << endl;
			}
			break;	
		}
		default:
		{
			cout << "El mes de " << month[cho_mod - 1] << " tiene " << days[cho_mod - 1] << " días." << endl;
		}
	}

}
