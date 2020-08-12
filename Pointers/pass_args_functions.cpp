// PASSING ARGUMENTS INTO FUNCTIONS:- PASS-BY REFERENCE WITH POINTERS....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


void passByValue(int x)
{
	x = 13;
}


void passByReference(int* x)
{
	*x = 99;
}

int main()
{

	int vera = 44;
	int eva = 164;

	passByValue(vera);
	passByReference(&eva);

	std::cout << "Vera is " << vera << "yrs old and a graduate student of MIT" << "\n";
	std::cout << "Eva is from Enugu, Nigeria and scored " << eva << " in the Quant section of the GRE\n";

	return 0;

}
