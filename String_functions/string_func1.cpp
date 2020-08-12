// "std::cin" from line 17-19 reads only one text of string at input and ignores the rest text after a whitespace/space....
// But with "getline", the program prints out the full text that was inputed after calling cin. Hence eliminating the whitespaces...
// In otherwords, "getline" from line 22-24 helps us read the entire line of text......



#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	// std::string aby;
	// std::cin >> aby;
	// std::cout << "Aby simply means - " << aby << "\n";


	std::string abyy;
	getline(std::cin, abyy);
	std::cout << "Aby simply means - " << abyy << "\n";


	return 0;

} 