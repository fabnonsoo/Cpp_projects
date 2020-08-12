// THE "THIS->" KEYWORD......


// This is the implementation file
// It contains the method definitions......



#include <iostream>
#include "MyVictor.h"



Victor::Victor(int numb)
:v(numb)
{

}


void Victor::printCrop()
{
	std::cout << "v = " << v << "\n";
	std::cout << "this->v= " << this->v << "\n";            // This line stores the memory address of the Object vo (Refer to Victor.cpp)
	std::cout << "(*this).v=" << (*this).v << "\n";         // This line w/the keyword " (*this).v " means de-referencing a pointer.....
}
