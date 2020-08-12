// RANDOM NUMBER GENERATORS.... 
// NB: We must add the C++ header file #include <cstdlib> when running random [rand()] codes in CODE-BLOCKS. But isn't really necessary in VISUAL STUDIO...
// This blocks of code gives us the same random numbers when we run it because rand() uses an algorithm that has been set by our computer.....
	

#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>
#include <cstdlib>



int main()
{


	for (size_t i = 1; i < 15; i++)
	{
		std::cout << 1 + (rand() % 6) << "\n";   // This line of code is to eliminate any output or result of "0" [because of the " 1 + operation added to the division of random and 6 "] after the modulus of 6 (% 6) operation.... In otherwords, the 1 will be added to the result of rand() % 6...
		std::cout << rand() % 8 << "\n";         // This is line of code can give us a "0 to 7" result after the random number divides 8 and outputs the remainder from the division... i.e rand() % 8....
	}


	return 0;

}
