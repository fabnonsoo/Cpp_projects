#include <iostream>
#include <fstream>         
#include <cmath>
#include <string>        
#include <vector>


class PreachClass
{
public:                     // NB: This line " public " means an access specifier.....
	void coolSaying()
	{
		std::cout << "Preaching to the Choir \n";
	}


};



int main()
{

	PreachClass PreachObject;
	PreachObject.coolSaying();

	return 0;

}

