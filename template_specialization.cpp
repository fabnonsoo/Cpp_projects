// Build a template that handles diferent types of data, however, if the user passes in a character, you'll work with it in a different kind of way......


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


template <class Grace>           // We use this template<class Grace> whenever we create a double, int, float object in our program..

class lube
{

	public:
		lube(Grace x)
		{
			std::cout << x << " is not a character" << "\n";
		}


};




template<>                       // This line is where the template specialization is used...
							     // When the users passes in a character, we want it to be able to do something differently.....

class lube<char>                // Therefore, we use this template<> whenever we create/handling a character object..
{                               // Else, we use the above template <class Grace> for other data types objects....

	public:
		lube(char x)
		{
			std::cout << x << " is for sure a character" << "\n";
		}


};


int main()
{

	lube <int> lobj1(700);
	lube <float> lobj2(77.3470);
	lube <double> lobj3(56.19);
	lube <char> lobj4('n'); 


	return 0; 

}