// In this numberGrid array, we have 5 elements (index)....
// x = row, y = column


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	int numberGrid[5][3] = {

								{1, 2, 3},   // In this numberGrid array, we have 5 elements (index)....
								{4, 5, 6},
								{7, 8, 9},
								{10, 11, 12},
								{13, 14, 15}
	};

	for (size_t x = 0; x < 2; x++)
	{
		for (size_t y = 0; y < 3; y++)
		{
			std::cout << numberGrid[x][y] << " ";
		}
		std::cout << "\n";
	}


	return 0;

}
