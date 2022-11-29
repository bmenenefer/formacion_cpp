/*
Crea un programa que emplee las funciones de los ejercicios anteriores en una sexta función
llamada, cho_ope(). La función debe solicitar un valor de tipo char como parámetro. El cuerpo
de la función, debe contener un switch para la elección de la función a invocar en función del
parámetro insertado por el usuario.
*/

#include <iostream>
using namespace std;
float suma(float n1, float n2)
{
	return (n1 + n2);
}
float resta(float n1, float n2)
{
	return n1 - n2;
}
float mult(float n1, float n2)
{
	return n1 * n2;
}
float div(float n1, float n2)
{
	return n1 / n2;
}
float pot(float n1, int n2)
{	
	float tmp = 1;
	for (int i = 1; i <= n2; i++)
	{
		tmp *= n1;
	}
	return (tmp);
}
void chos_op()
{
	float res, n1, n2;	
	char ope;
	
	cout << "Escoge una operación: +, -, *, /, ^" << endl;
	cin >> ope;

	cout << "Introduce el primer número: ";
	cin >> n1;
	cout << "Introduce el segundo número: ";
	cin >> n2;

	switch (ope)
	{

		case '+':
			res = suma(n1, n2);
			cout << res << endl;
			cout << "El resultado de la suma es: " << res << endl;
			break;
		case '-':
			res = resta(n1, n2);
			cout << "El resultado de la resta es: " << res << endl;
		case '*':
			res = mult(n1, n2);
			cout << "El resultado de la multiplicación es: " << res << endl;
		case '/':
			res = div(n1, n2);
			cout << "El resultado de la división es: " << res << endl;
		case '^' :
			res = pot(n1, n2);
			cout << "El resultado de la potencia es: " << res << endl;
		default:
			cout << "Operación no válida." << endl;
	}
}

main()
{
	chos_op();
}
