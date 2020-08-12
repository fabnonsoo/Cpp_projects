// THE REPLACE STRING FUNCTION.....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	std::string u1("Hi! My name is Nonso and I love Biafra");
	std::cout << u1 << "\n";

	u1.replace(15, 5, "Meg Onyia");

	std::cout << u1 << "\n";


	return 0;

} 