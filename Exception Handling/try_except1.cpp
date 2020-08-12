#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


int main()
{

	try
	{
		int momsAge = 30, sonsAge = 34;

		if (sonsAge > momsAge)
		{
			throw 99;
		}
	}
	catch (int x)
	{
		std::cout << "The Son's age cannot be greater than the Mom's age, Error Number: " << x << "\n";
	}

	return 0;

}