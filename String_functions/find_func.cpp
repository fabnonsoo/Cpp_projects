// FIND FUNCTION......


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	std::string n1("This country Nigeria has missed out on the smartest individuals that was raised there by their parents");

	std::cout << n1.find("is") << "\n";      // In this line " is " is found at index 2 in n1.find("is), i.e the program picks/outputs the first index (from left to right)...

	std::cout << n1.rfind("is") << "\n";    // In this line " is " is found at index 75 in n1.rfind("is), i.e the program picks the last index (from right to left).....


	return 0;

}