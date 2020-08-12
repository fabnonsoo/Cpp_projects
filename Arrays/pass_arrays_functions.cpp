// PASSING ARRAYS INTO A FUNCTION....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



void printArray(int theArray[], int sizeOfArray)
{
	for (size_t i = 0; i < sizeOfArray; i++)
	{
		std::cout << theArray[i] << "\n";
	}

}



int main()
{

	int Meg[3] = {435, 67, 9};
	int Epaphras[6] = {67, 34, 12, 90, 77, 54};

	printArray(Meg, 1);
	printArray(Epaphras, 3);

	return 0;

}
