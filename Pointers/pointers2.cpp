#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	int dish = 5;
	std::cout << &dish << "\n";

	int *dishpointer;
	dishpointer = &dish;
	std::cout << dishpointer << "\n";

	return 0;

}