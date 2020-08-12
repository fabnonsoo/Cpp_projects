// Anytime you're working with a class inside another class, you need to use a "MEMBER INITIALIZER LIST"....
// This is the implementation file
// It contains the method definitions......



#include <iostream>
#include "MyPeople.h"
#include "MyBirthday.h"


People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)
{

}

void People::printInfo()
{
	std::cout << name << "was born on: "; 
	dateOfBirth.printDate();
}
