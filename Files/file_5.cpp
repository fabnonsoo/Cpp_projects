// INCORPORATING COMPUTER PROGRAM WITH A FILE (Building a program that works with a file).... 
// First things first, we build the program that writes to an object file, in this case:-> ObjectFile....
// Then, we do the main incorporating....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



// The getWhatTheyWant() function

int getWhatTheyWant()
{
	int choice;

	std::cout << "\n1:- Just Plain Items" << "\n";
	std::cout << "2:- Helpful Items" << "\n";
	std::cout << "3:- Harmful Items" << "\n";
	std::cout << "4:- Effective Program\n" << "\n";   
	std::cout << "5:- Quit Program\n" << "\n";

	std::cin >> choice;
	return choice;

}



// The displayItems() function

void displayItems(int x)
{
	std::ifstream ObjectFile("object.txt");

	std::string itemName;
	double itemEffectPower;

	if (x == 1)
	{
		while (ObjectFile >> itemName >> itemEffectPower)
		{
			if (itemEffectPower == 0)
			{
				std::cout << itemName << " " << itemEffectPower << "\n";
			}
		}

	}


	if (x == 2)
	{
		while (ObjectFile >> itemName >> itemEffectPower)
		{
			if (itemEffectPower > 0)
			{
				std::cout << itemName << " " << itemEffectPower << "\n";
			}
		}

	}


	if (x == 3)
	{
		while (ObjectFile >> itemName >> itemEffectPower)
		{
			if (itemEffectPower < 0)
			{
				std::cout << itemName << " " << itemEffectPower << "\n";
			}
		}

	}


}



int main()
{

	int whatTheyWant;                      //  Incorporating the program & file starts here....

	whatTheyWant = getWhatTheyWant();

	while (whatTheyWant != 5)
	{

		// Whenever/Because we're testing a single variable for multiple values, it's better we use a switch statement....
		switch (whatTheyWant)
		{
		case 1:
			displayItems(1);
			break;

		case 2:
			displayItems(2);
			break;

		case 3:
			displayItems(3);
			break;

		case 4:
			displayItems(4);
			break;


		default:
			break;

		}

		whatTheyWant = getWhatTheyWant();

	}



	return 0;

} 