// FUNCTION TEMPLATE - Working with more than one type of data using a template definition....


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>



template <class FirstType, class SecondType>

FirstType smaller(FirstType a, SecondType b)            // Here, the FirstType generic class definition determines the data type the result will yield....
{
	return(a < b ? a : b);                              // This line means, if a is < b, return a or else return b.....
}


template <class FirstType, class SecondType>

SecondType big(FirstType a, SecondType b)              // Here, the result will yield a floating point number because the SecondType generic class definition was used as the main data type definition...
{
	return(a > b ? a : b);                          
}


int main()
{

	int u = 98, s = 103;
	double v = 78.44, t = 121.67;


	std::cout << "The Smaller number is: " << smaller(u, v) << "\n";
	std::cout << "The Bigger number is: " << big(s, t) << "\n";


	return 0;

}