#include <iostream>
#include <cmath>
#include <string>


int main()
{


	int num1, num2;
	char op;

	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Enter op: ";
	std::cin >> op;

	std::cout << "Enter second number: ";
	std::cin >> num2;

	if (op == '+')
	{
		std::cout << num1 + num2;
	}
	else if (op == '-')
	{
		std::cout << num1 - num2;
	}
	else if (op == '/')
	{
		std::cout << num1 / num2;
	}
	else if (op == '*')
	{
		std::cout << num1 * num2 << "\n";
	}
	else
	{
		std::cout << "Invalid Operator" << "\n";
	}


	return 0;

}
