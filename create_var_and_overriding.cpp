// CREATING A VARIABLE AND OVERRIDING IT WITH ANOTHER ASSIGNMENT INTEGER OR STRING IN C++....


#include <iostream>
#include <cmath>
#include <string>


int main()
{


	int luna = 80;
	int tuna = 78;
	int sum;

	sum = luna + tuna;
	tuna = 90;                    // In this line " tuna = 90 " overrode " tuna = 70 ".....

	std::cout << "The addition of luna and tuna is: ";
	std::cout << sum << "\n";


	std::cin.get();

}
