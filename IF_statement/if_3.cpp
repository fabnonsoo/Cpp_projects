#include <iostream>
#include <cmath>
#include <string>



int main()
{


	bool isMale = false;
	bool isTall = true;

	if (isMale && isTall)
	{
		std::cout << "You're a tall Male\n";
	}
	else
	{
		std::cout << "You're not a tall Male\n";
	}

	if (isMale || isTall)
	{
		std::cout << "You're either tall or a Male" << "\n";
	}

	else if (isMale && !isTall)
	{
		std::cout << "You're a short male\n";
	}
	else if (!isMale && isTall)
	{
		std::cout << "You're tall but not Male\n";
	}
	else
	{
		std::cout << "You're neither tall or a male\n";
	}


	return 0;

}
