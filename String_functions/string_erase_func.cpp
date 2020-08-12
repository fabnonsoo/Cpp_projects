// THE STRING ERASE FUNCTION....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	std::string v1("I don't understand why Jesus loves me so much. His love is Agape!");
	std::cout << v1 << "\n";

	v1.erase(18);                    // It erases the remaining text after the index(18) in the string. Hence, program outputs:-> I don't understand

	std::cout << v1 << "\n";

	return 0;

}  