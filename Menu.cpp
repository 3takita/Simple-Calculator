#include <iostream>
#include <cmath>
#include "Menu.h"

//init_mainMenu
void init_mainMenu() { //Menu.cpp
	Math calc;
    do {
        switch (menuOption()) {
            case 0: exit(1); break; //if option is 0, exit program
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
            default: cout<<"\t\tInvalid Option. Try again: "; break;
        }
        cout<<"\n";
        system("pause");
        system("cls");
    }while(true);
}

//PreCondition: User input must be integer  
//PostCondition: Validates input and returns an integer 
double inputInteger(string prompt, double input) { //Input.cpp
	do
	{ //input validation
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

//first number input
double num1() { //Input.cpp
	double _m = inputInteger("Enter first number: ", 0);
	return _m;
}
//second number input
double num2() { //Input.cpp
	double _n = inputInteger("Enter second number: ", 0);
	return _n;
}

//Menu Options (1)
int menuOption() { //Menu.cpp
    cout<<"\n\tCALCULATOR APPLICATION"
        <<"\n-— -— -— -— -— -— -— -"
        <<"\n\t 1. Addition"
        <<"\n\t 2. Subtraction"
        <<"\n\t 3. Multiplication"
        <<"\n\t 4. Division"
        <<"\n\t 5. Exponent"
        <<"\n-— -— -— -— -— -— -— -"
        <<"\n\t 0. Exit"
        <<"\n-— -— -— -— -— -— -— -"<<endl;
    return inputInteger("\tSelect option: ", 5);
}

	//Class constructor(s)
	Math::Math() {double m, n = 0;}
	Math::Math(const double& _m, const double& _n) {
		n = _n; 
		m = _m;
	}
	//setter(s)
	void Math::setM(const double& _m) {
		m = _m;
	}
	void Math::setN(const double& _n) {
		n = _n;
	}
	//getter(s)
	double Math::getN() {return n;}
	double Math::getM() {return m;}
	// member functions 
	
    //Preconditon:
    //Postcondition:
    void Math::add() {
    	double a = num1();
    	double b = num2();
    	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    }

    //Preconditon:
    //Postcondition:
    void Math::subtract() {
    	double a = num1();
    	double b = num2();
    	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    }

    //Preconditon:
    //Postcondition:
    void Math::multiply() {
        double a = num1();
    	double b = num2();
    	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    }

    //Preconditon:
    //Postcondition:
    void Math::divide() {
        double a = num1();
    	double b = num2();
    	cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    }

    //Preconditon:
    //Postcondition:
    void Math::exponent() {
        double a = num1();
    	double b = num2();
    	cout<<a<<" ^ "<<b<<" = "<<pow(a,b)<<endl;
    }



