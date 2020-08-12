// While this block of code allows us to use "time(0)" to change the algorithm of srand() and rand(). Hence, giving us different random numbers when we run the code....
// We must add a C++ header file knowm as:- "#include <time.h> OR  #include <ctime>" to ensure we invoke the time(0) function for "srand()", else we'll get an error.....



#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>
#include <cstdlib>
#include <time.h>



int main()
{


	srand(time(0));

	for (size_t i = 1; i < 12; i++)
	{
		std::cout << 1 + (rand() % 6) << "\n";
	}

	return 0;

}
