// WORKING WITH CUSTOM FILE STRUCTURE/WRITING TO A FILE.....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	std::ofstream PlayersFile("players.txt");

	std::cout << "Enter player ID Number, Name and Money \n";
	std::cout << "NB: You press Ctrl+Z to quit after inputing player details \n";

	int playerIDNum;
	double money;
	std::string name;

	while(std::cin >> playerIDNum >> name >> money)
	{
		PlayersFile << playerIDNum << ' ' << name << ' ' << money << "\n";
	}


	return 0;

}