// BUILDING A CALCULATOR.....


#include <iostream>
#include <cmath>
#include <string>


int main()
{

	int a;                     // This line means declaring a variable since we aren't assigning it or giving it a number, i.e "int a = 4"
	int b;
	int sum;
	int subtraction;



	a = 45;
	b = 56;

	sum = a + b;
	std::cout << "The sum of both numbers is: " << sum << "\n";



	// OR.....

	
	std::cout << "Enter a number: ";
	std::cin >> a;                     // NB: " cin " in C++ means the input stream object WHILE the " >> " means the stream extraction operator

	std::cout << "Enter another number: ";
	std::cin >> b;

	subtraction = a - b;
	std::cout << "The difference between both numbers is: " << subtraction << "\n";
	


	std::cin.get();


}
