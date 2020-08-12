// THE INSERT STRING FUNCTION......


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	std::string z1("Hi! My name is Onyia and I reside in Toronto");
	std::cout << z1 << "\n";

	z1.insert(15, "Nonso ");

	std::cout << z1 << "\n";

	std::cin.get();

}
