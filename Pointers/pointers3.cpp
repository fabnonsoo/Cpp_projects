// HOW TO USE MATHS WITH POINTERS AND HOW TO ADD INTEGERS TO POINTERS...
// When adding integers to a pointer, it doesn't change the memory address of that pointer, it only changes what element it's pointing to...


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	int vt[5];

	int *bp0;
	bp0 = &vt[0];           // Same as int *bp0 = &vt[0];

	int *bp1 = &vt[1];
	int *bp2 = &vt[2];

	std::cout << "bp0 is at: " << bp0 << "\n";
	std::cout << "bp1 is at: " << bp1 << "\n";
	std::cout << "bp2 is at: " << bp2 << "\n";

	bp0++;
	std::cout << "bp0 is now at: " << bp0 << "\n";



	return 0;

}
