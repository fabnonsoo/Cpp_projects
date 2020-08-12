#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


int main()
{

	try
	{
		int num1;
		std::cout << "Enter the first number: \n";
		std::cin >> num1;

		int num2;
		std::cout << "Enter the second number: \n";
		std::cin >> num2;

		if (num2 == 0)
		{
			throw 0;
		}
		else
		{
			std::cout << num1 / num2 << "\n";
		}
	}


	catch (int x)
	{
		std::cout << "You can't divide by " << x << "\n";
	} 


	// OR You can use the catch block like this.....
	catch (...)
	{
		std::cout << "You can't divide by " << 0 << "\n";
	}


	return 0;

}