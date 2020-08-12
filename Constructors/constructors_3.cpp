#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



class Book
{
public:
	std::string title;
	std::string author;
	int pages;

	Book(std::string name)				//	See Line 30...
	{								
		std::cout << name << "\n";		//  See Line 32...
	}								
									

};



int main()
{

	Book book1 ("Justice League");

	Book book2 ("Game Of Thrones");   

	return 0;

}
