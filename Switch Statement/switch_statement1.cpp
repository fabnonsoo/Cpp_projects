#include <iostream>
#include <fstream>          // This header file is used for working with files i.e file input and output.....
#include <cmath>
#include <string>           // This header file gives you string functions......
#include <vector>
#include <cstdlib>
#include <time.h>          // For Random numbers lesson....    
#include <ctime>          // This header file allows us to access our clocktime in our computer....




int main()
{

	int age = 16;        // NB: This is the line where you change the value of age i.e " int age " for different cases in the switch statement....

	switch (age)
	{
		case 16:
			std::cout << "Hey you can drive now!" << "\n";
			break;

		case 18:
			std::cout << "Go buy some lotto tickets" << "\n";
			break;

		case 21:
			std::cout << "Buy me some beer" << "\n";
			break;

		default:      // NB default also means the "else statement" in the IF-ELSE statement in C++....
			std::cout << "You get Nothing" << "\n";
			break;
	}


	std::cin.get();


}
