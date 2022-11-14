#include <iostream>
using namespace std;

double inches, cm;

main()
{

	cout << "Introduce la medida en pulgadas: ";
	cin >> inches;

	cm = inches * 2.54;

	cout << "El valor en cm es: " << cm;
	
	cout << endl;
}
