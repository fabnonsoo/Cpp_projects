#include <iostream>
#include <fstream>         
#include <cmath>
#include <string>         
#include <vector>


int power(int baseNum, int powerNum)
{
	int result = 1;

	for (size_t i = 0; i < powerNum; i++)
	{
		result = result * baseNum;
	}

	return result;

}



int main()
{

	std::cout << power(6, 3) << "\n";

	std::cin.get();

}
