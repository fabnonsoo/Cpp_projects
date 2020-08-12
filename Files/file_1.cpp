//  Build a program that creates a text file meg.txt
//  Line 15 & 16 can also be written in one line as:-> std::ofstream NonsoFile("meg.txt")



#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	std::ofstream NonsoFile;				// Here, we created a File object.....
	NonsoFile.open("meg.txt");              // Here, "meg.txt" file is associated with this file object - NonsoFile....

	
	NonsoFile << "Nonso is a child of GOD! \n";
	NonsoFile.close();

	return 0;

}