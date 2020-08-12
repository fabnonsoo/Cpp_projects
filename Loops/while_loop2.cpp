#include <iostream>
#include <cmath>
#include <string>



int main()
{


	int b = 2;

	while (b <= 20)
	{
		std::cout << "Popcorn is: " << b << "\n";
		b = b + 2;  // NB: When running a WHILE LOOP, this line is so important because it tells us the frequency at which we want the loop to run. If this line isn't included, the loop keeps running continuously and could cause your computer to crash....
		b++;
	}

	std::cin.get();


}
