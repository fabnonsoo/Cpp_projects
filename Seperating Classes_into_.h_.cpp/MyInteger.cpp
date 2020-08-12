// This is the implementation file
// It contains the method definitions......


#include "MyInteger.h"


int i;

void setI(int a)
{
	i = a;
}

int getI() 
{
	return i;
}


// OR Another way of writing the method declaration in C++ is shown below.....


void MyInteger::setI(int a)
{
	i = a;
}

int MyInteger::getI() const
{
	return i;
}
