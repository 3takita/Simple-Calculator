//File: Menu.cpp
#include <iostream>
#include <cmath>
#include "Menu.h"
using namespace std;

//Precondition: User makes a menu selection
//Postcondition: Matches user selection with menu options and runs the selected function
void init_mainMenu() {
	Math calc;
	do {
		switch (menuOption()) {
		case 0: exit(1); break;
		case 1:
			system("cls");
			calc.add();
			break;
		case 2:
			system("cls");
			calc.subtract();
			break;
		case 3:
			system("cls");
			calc.multiply();
			break;
		case 4:
			system("cls");
			calc.divide();
			break;
		case 5:
			system("cls");
			calc.exponent();
			break;
		default: cout << "\t\tInvalid Option. Chose from 0 to 5: "; break;
		}
		cout << "\n";
		system("pause");
		system("cls");
	} while (true);
}

//PreCondition: User input must be integer
//PostCondition: Validates input and returns and integer
double inputNum(string prompt, double input) {
	do {
		cout << prompt;
		if (!(cin >> input)) {
			cout << "Error! Input must be an integer. ";
			cin.clear();
			cin.ignore(999, '\n');
		}
		else
			break;
	} while (true);
	cin.clear();
	cin.ignore(999, '\n');
	return input;
}

//Precondition: User input must be a number of integer or double type
//Postcondition: Validates user input and returns the number entered
double num1() {
	double _m = inputNum("Enter first number: ", 0);
	return _m;
}
//Precondition: User input must be a number of integer or double type
//Postcondition: Validates user input and returns the number entered
double num2() {
	double _n = inputNum("Enter second number: ", 0);
	return _n;
}

//Precondition: User menu selection must be an integer from 0 to 5
//Postcondition: Returns the selected menu choice
int menuOption() {
	cout << "\n\tCALCULATOR APPLICATION by Stephen D 11/6/22"
		<< "\n\t" << string(60, char(205))
		<< "\n\t 1. Add"
		<< "\n\t 2. Subtract"
		<< "\n\t 3. Multiply"
		<< "\n\t 4. Divide"
		<< "\n\t 5. Exponent"
		<< "\n\t" << string(60, char(196))
		<< "\n\t 0. Exit"
		<< "\n\t" << string(60, char(205)) << endl;
	return inputNum("\tSelect Option: ", 5);
}


//Class constructor
Math::Math() { double m = 0; double n = 0; }
//setters
void Math::setM(const double& _m) {
	m = _m;
}
void Math::setN(const double& _n) {
	n = _n;
}
//getters
double Math::getN() { return n; }
double Math::getM() { return m; }
//Precondition: User input must be positive, negative, decimal or whole numbers
//Postcondition: Computes and prints the sum of the numbers to the screen
void Math::add() {
	double a = num1();
	double b = num2();
	cout << a << " + " << b << " = " << a + b << endl;
}
//Precondition: User input must be positive, negative, decimal or whole numbers
//Postcondition: Computes and prints the difference betweem the numbers to the screen
void Math::subtract() {
	double a = num1();
	double b = num2();
	cout << a << " - " << b << " = " << a - b << endl;
}
//Precondition: User input must be positive, negative, decimal or whole numbers
//Postcondition: Computes and prints the product of the numbers to the screen
void Math::multiply() {
	double a = num1();
	double b = num2();
	cout << a << " x " << b << " = " << a * b << endl;
}
//Precondition: User input must be positive, negative, decimal or whole numbers
//Postcondition: Computes and prints the quotient of the numbers to the screen
void Math::divide() {
	double a = num1();
	double b = num2();
	cout << a << " / " << b << " = " << a / b << endl;
}
//Precondition: User input must be positive, negative, decimal or whole numbers
//Postcondition: Computes and prints the first number raised to the power of the second
void Math::exponent() {
	double a = num1();
	double b = num2();
	cout << a << " ^ " << b << " = " << pow(a, b) << endl;
}
