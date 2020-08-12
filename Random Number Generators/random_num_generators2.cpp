// This blocks of code allows us to change the algorithm of rand() by using the srand(). But the result/output of this code doesn't change unless we change the figures in brackets of "srand()".


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>
#include <cstdlib>



int main()
{


	srand(240);

	for (size_t i = 1; i < 13; i++)
	{
		std::cout << 1 + (rand() % 6) << "\n";
	}

	return 0;

}
