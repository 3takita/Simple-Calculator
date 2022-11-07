#ifndef MENU_H
#define MENU_H
#include <iostream>
using namespace std;

void init_mainMenu(); 
double inputInteger(string prompt, double input); 
double num1(); 
double num2(); 
int menuOption(); 

class Math { 
private:
	double m, n;
public:
	//constructor(s)
	Math();
	Math(const double& _m, const double& _n);
	//setter(s)
	void setM(const double& _m);
	void setN(const double& _n);
	//getter(s)
	double getN();
	double getM();
	  /* member functions */
	
    //Preconditon: Takes two numbers as argument
    //Postcondition: Prints the sum of the numbers
    void add();

    //Preconditon: Takes two numbers as argument
    //Postcondition: Prints the difference between the numbers to the screen
    void subtract();

    //Preconditon: Takes two numbers as argument
    //Postcondition: Prints their product to the screen
    void multiply();

    //Preconditon: Takes two numbers as argument
    //Postcondition: Prints their quotient to the screen
    void divide();

    //Preconditon: Takes two numbers as argument
    //Postcondition: Prints the first number raised to the power of the second number to the schreen
    void exponent();
};

#endif 
