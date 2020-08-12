// COMPOSITIONS:- Composition in C++ basically means using objects of other classes inside your class/current class.....


// This is the implementation file
// It contains the method definitions......


#include <iostream>
#include "MyBirthday.h"


Birthday::Birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}


void Birthday::printDate()
{
	std::cout << month << "/" << day << "/" << year << "\n";
}
