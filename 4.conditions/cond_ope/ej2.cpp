/*
Haz una aplicación que le pida al usuario que introduzca los puntos obtenidos en un examen.
Si el número de puntos es superior a 50, el usuario debe ser notificado indicando que ha su-
perado el examen. La puntuación de los exámenes va de 0 a 100, así que si el usuario intro-
duce un número que no está dentro del rango, se mostrará mensaje de error.
*/

#include <iostream>
using namespace std;

int nota;
string mssg;

main()
{
	do{
		cout << "Introduce la nota obtenida en el examen: ";
		cin >> nota;
		//cout << (nota < 0) << endl;
		//cout << (nota > 100) << endl;
	}while(((nota < 0) || (nota > 100)) && cout << "Cifra introducida incorrecta." << endl);

	mssg = (((50 <= nota) && (nota <= 100)) ? "Enhorabuena, ¡Has aprobado!" : "Lo lamento, has suspendido.");
	cout << endl;
	cout << mssg << endl;
}
