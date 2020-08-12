// COMPOSITIONS:- Composition in C++ basically means using objects of other classes inside your class/current class.....


#include <iostream>
#include "MyPeople.h"
#include "MyBirthday.h"

using namespace std;


int main()
{

	Birthday birthObject(07, 27, 1902);

	People NonsoOnyia("Nonso The Great ", birthObject);        // NB: This line creates the People Object.....
	NonsoOnyia.printInfo();


	return 0;

}
