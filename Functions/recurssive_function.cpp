// When writing Recurssive functions in C++, ensure that you include your "base case", else your program will keep running, which will eventaully lead to computer crash...
// This line of code is known as the "base code" in a recursssive function. Without his code, the program will keep on runnning continually until your computer crashes.....
// Normally, When you return the value to a function, your function ends. But, in recurssive functions the first return value is known as the base case.....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>
#include <cstdlib>
#include <time.h>


int factorialFinder(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * factorialFinder(x - 1);
	}
}


int main()
{

	std::cout << factorialFinder(5);

	return 0;

}
