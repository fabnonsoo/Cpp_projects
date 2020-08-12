// This is the implementation file
// It contains the method definitions......


#include <iostream>
#include "MyDeconstructor.h"


Deconstructor::Deconstructor()
{
	std::cout << "This is the Constructor! \n";
}


Deconstructor::~Deconstructor()  // NB: This (~Deconstructor) is the Deconstructor in the Class (Deconstructor)...
{
	std::cout << "This is the De-Constructor! \n";
}
