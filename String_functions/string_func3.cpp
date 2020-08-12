#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	std::string s1 = "washington";              // OR:-> std::string s1("washington");

	std::cout << s1.at(3) << "\n";              // Outputs the 3rd index in "washington" 

	
	for (size_t x = 0; x < s1.length(); x++)        // Now lets use a FOR LOOP to loop through the elements (washington) in s1.
	{
		std::cout << s1.at(x);
	}

	return 0;

}
