// This is the implementation file
// It contains the method definitions......
// Each time you're creating a "Constant Object" you must first create a "Constant function"......


#include <iostream>
#include "MyConstant.h"


Constant::Constant()
{

}

void Constant::printTop()
{
	std::cout << "I am a regular function \n";
}


void Constant::printTop2() const
{
	std::cout << "This is a Regular Function! \n";
}  
