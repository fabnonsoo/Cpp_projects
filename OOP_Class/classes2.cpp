#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


class Nonsoclass
{
public:
	std::string name;

};


int main()
{


	Nonsoclass bo;
	bo.name = "Nonso Onyia";
	std::cout << bo.name << "\n";


	std::cin.get();


}