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

};


int main()
{


	Book First_Book;
	First_Book.title = "Harry Potter";
	First_Book.author = "JK Rowling";
	First_Book.pages = 500;
	First_Book.pages = 800;

	Book Second_Book;
	Second_Book.title = "The Lord Of the Rings";
	Second_Book.author = "Tolkein";
	Second_Book.pages = 800;
	Second_Book.title = "X-MEN";       // This line is changing/updating the name of the " book2.title " object class from "The Lord Of The Rings" to "Hunger Games"..


	std::cout << First_Book.pages << "\n";
	std::cout << Second_Book.author << "\n";
	std::cout << Second_Book.title << "\n";



	std::cin.get();


}
