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

	Book()
	{
		std::cout << "Creating Objects \n";
	}

};



int main()
{

	Book First_Book;
	First_Book.title = "Harry Potter";
	First_Book.author = "JK Rowling";
	First_Book.pages = 500;


	Book Second_Book;
	Second_Book.title = "The Lord Of the Rings";
	Second_Book.author = "Tolkein";
	Second_Book.pages = 800;

	std::cout << First_Book.pages << "\n";

	std::cout << Second_Book.author << "\n";



	return 0;

}

