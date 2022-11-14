/*
Write a program immitating a vending machine. The program should present the user with a choice
of 6 products of your choice (coke, water, chocolate, ...). Then allow the user to choose a
product by entering a number 1-6. Add an exception for invalid input if the user inputs a num-
ber which doesn't correspond to any choice.
*/

#include <iostream>

using namespace std;

int cho_prod;

//string tab_op[6]={"Cola", "Chocolate", "Water", "Kinder", "Aquarius", "Chips"};


string tab_op[6];

main()
{
	tab_op[0] = "1. Coka-Cola";
	tab_op[1] = "2. Chocolate";
	tab_op[2] = "3. Agua";
	tab_op[3] = "4. Kinder";
	tab_op[4] = "5. Aquarius";
	tab_op[5] = "6. Potácolas Frixidas";

	cout << "Elige uno de los siguientes productos." << endl;
	for(int i =0; i < 6; i++){
		cout << tab_op[i] <<endl;
	}
	
	do{
		cin >> cho_prod;
		//cout << "Has elegido " << tab_op[cho_prod - 1] << "." << endl;
	}while((cho_prod < 1 || cho_prod > 6) && cout << "Introduce un número comprendido entre el 1 y el 6" << endl);
	
	cout << "Has elegido " << tab_op[cho_prod - 1] << "." << endl;
}
