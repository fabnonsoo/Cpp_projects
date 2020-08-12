/// MEMBER INITIALIAZATIONS VARIABLES.....


// This is the implementation file
// It contains the method definitions......


#include <iostream>
#include "MyInitVariable.h"



InitVariable::InitVariable(int a, int b)
: regVar(a), constantVar(b)               // The double column in this line of code tells C++ that we're going to be working w/member initializer syntax....
{

}

void InitVariable::print()
{
	std::cout << "The Regular Variable is: " << regVar << "\n";
	std::cout << "The Constant Variable is: " << constantVar << "\n";
}