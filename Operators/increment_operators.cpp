#include <iostream>
#include <cmath>
#include <string>



int main()
{
	
	int y = 20;


	std::cout << "Value of X is: " << y++ << "\n";
	std::cout << "Value of X is: " << y++ << "\n";
	std::cout << "Value of X is: " << y << "\n";


	std::cout << "Value of X is: " << y-- << "\n";
	std::cout << "Value of X is: " << y-- << "\n";
	std::cout << "Value of X is: " << y << "\n";


	std::cout << "Value of X is: " << ++y << "\n";
	std::cout << "Value of X is: " << ++y << "\n";
	std::cout << "Value of X is: " << y << "\n";


	std::cout << "Value of X is: " << --y << "\n";
	std::cout << "Value of X is: " << --y << "\n";
	std::cout << "Value of X is: " << y << "\n";
	

	return 0;

}
