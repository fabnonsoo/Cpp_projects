// DEFAULT PARAMETERS/ARGUMENTS IN C++ FUNCTIONS.....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>
#include <cstdlib>
#include <time.h>


int volume(int length = 10, int width = 15, int heigth = 20)
{
	int result = length * width * heigth;

	return result;
}


int main()
{

	std::cout << volume() << "\n";
	std::cout << volume(5, 4, 10);	// NB: You use this line of code when the default parameters/arguments are not stated in the volume() function above the "int main()" OR when you want to override the default values/parameters/arguments in the volume() function....


	return 0;

}
