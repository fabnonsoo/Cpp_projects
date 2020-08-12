// READING CUSTOM DATA....
// ofstream is for writing data to a file, while ifstream is for reading data from a file to the computer memory....



#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	std::ifstream PlayersFile("players.txt");

	int playerIDNum;
	std::string name;
	double money;

	while (PlayersFile >> playerIDNum >> name >> money)
	{
		std::cout << playerIDNum << ", " << name << ", " << money << "\n";
	} 


	return 0;

}