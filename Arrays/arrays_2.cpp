// Write a program that can contain nine or hundred elements in an array initialiazation list..


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	int bucky[5] = {66, 87, 2, 34, 90};
	std::cout << bucky[3] << "\n";

	
	int louis[100];

	std::cout << "Element (Index) " << "              Array Value" << "\n";


	for (size_t i = 0; i <= 100; i++)
	{
		louis[i] = 99;
		std::cout << i << "                ---------         " << louis[i] << "\n";
	}


	return 0;

}
