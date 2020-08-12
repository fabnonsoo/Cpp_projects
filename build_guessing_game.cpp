// BUILDING A GUESSING GAME.....


#include <iostream>
#include <cmath>
#include <string>



int main()
{


	int secretNum = 7;
	int guess = ' ';
	int guesscount = 0;
	int guesslimit = 3;
	bool outofguesses = false;


	while (secretNum != guess & !outofguesses)
	{
		if (guesscount < guesslimit)
		{
			std::cout << "Enter guess: ";
			std::cin >> guess;
			guesscount++;
		}
		else
		{
			outofguesses = true;
		}

	}

	if (outofguesses = true)
	{
		std::cout << "You Lose!" << "\n";
	}
	else
	{
		std::cout << "You Win!" << "\n";
	}


	std::cin.get();


}
