
#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{
	
	std::ofstream NonsosFile("epa.txt");

	if (NonsosFile.is_open())
	{
		std::cout << "Okay there seem to be an associated file, hence the file is open \n";
	}

	else               // This 'else" block of code runs/outputs only when the object file is blank/not associated.. i.e:-> std::ofstream NonsosFile("").
	{
		std::cout << "There is no file association! \n";
	}

	NonsosFile << "Nonso Onyia is a great man! \n";
	NonsosFile.close();
	

	return 0;

} 

