// SWAP FUNCTIONS:- The Swap function is used for sorting....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	std::string one("Apples ");
	std::string two("Beans ");

	std::cout << one << two << "\n";
	one.swap(two);

	std::cout << one << two << "\n";


	return 0;

} 