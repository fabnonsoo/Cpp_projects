// Function overloading is used when we want to use the same function name for different data types. It hepls users to use our program easily....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>
#include <cstdlib>
#include <time.h>


void printNumber(int x)
{
	std::cout << "Now I'm entering an Integer: " << x << "\n";
}


void printNumber(float x)
{
	std::cout << "Now I'm entering a Float: " << x << "\n";
}



int main()
{

	int a = 890;
	float b = 145.79688;

	printNumber(a);
	printNumber(b);


	return 0;

}