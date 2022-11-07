//File: Menu.h
#ifndef MENU_H
#define MENU_H
#include <iostream>
using namespace std;

void init_mainMenu();
double inputNum(string prompt, double input);
double num1();
double num2();
int menuOption();

class Math {
private:
	double m;
	double n;
public:
	//constructor(s)
	Math();
	//setters
	void setM(const double& _m);
	void setN(const double& _n);
	//getters
	double getN();
	double getM();
	//member functions
	void add();
	void subtract();
	void multiply();
	void divide();
	void exponent();
};

#endif
