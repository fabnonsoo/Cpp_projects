// CHALLENGE 1:- Create a program that asks the user to enter an integer, waits for them to input an integer, then tells them what 2 times that number is.


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


using namespace std;



int main()
{

	int num;
	int num1;
	int num2;

	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter second number: ";
	cin >> num2;

	cout << num1 << " + " << num2 << " is: " << num1 + num2 << endl;
	cout << "Subtraction of num1 and num2: " << num1 - num2 << endl;


	cout << "Enter Integer: ";
	cin >> num;

	cout << "Double of that integer is: " << num * 2 << endl;
	cout << "Triple of that integer is: " << num * 3 << endl;


	return 0;

}