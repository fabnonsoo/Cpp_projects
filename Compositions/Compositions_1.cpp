// COMPOSITIONS:- Composition in C++ basically means using objects of other classes inside your class/current class.....


#include <iostream>
#include "MyBirthday.h"



int main()
{
	
	Birthday birthObject(14, 27, 1902);                    // NB: This line creates the birthday Object.....


	People NonsoOnyia("Nonso The Great ", birthObject);        // NB: This line creates the People Object.....
	NonsoOnyia.printInfo();


	return 0;

}
