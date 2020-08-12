// FUNCTION TEMPLATE - Working with one type of data using a template definition....
// Here, we use a template definition to build a generic class/type of data that can allow us use different data types in our program....

	
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


template <class Nonso>

Nonso addxandy(Nonso a, Nonso b)
{
	return  a + b;
}


int main()
{

	int x = 7;
	int y = 43;
	int z;

	z = addxandy(x, y);

	std::cout << "z is: " << z << "\n";

	return 0;

}