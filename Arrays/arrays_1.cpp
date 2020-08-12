#include <iostream>
#include <fstream>
#include <string>        
#include <vector>
#include <cstdlib>


int main()
{

	int LuckyNums[] = {4, 8, 16, 64, 146, 246};
	int lnums[10], jnums[9] = {3, 4, 5, 6, 8, 12, 16};

	LuckyNums[0] = 19;
	lnums[0] = 24;
	lnums[1] = 29;
	lnums[2] = 33;
	jnums[7] = 27;
	jnums[8] = 30;

	std::cout << LuckyNums[0] << "\n";
	std::cout << lnums[2] << "\n";
	std::cout << jnums[8] << "\n";


	return 0;

}
