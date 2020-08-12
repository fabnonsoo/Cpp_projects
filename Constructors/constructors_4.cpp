#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



class Book
{
	public:
		std::string title;
		std::string director;
		std::string movie_length;


		Book(std::string Title, std::string Director, std::string Movie_length)
		{
			title = Title;
			director = Director;
			movie_length = Movie_length;
		}


		Book()
		{
			director = "no director";
			title = "no title";
			movie_length = "0hr";
		}

};



int main()
{


	Book book1("Justice League", "Jack Snyder, Joss Whedon", "2 hours");

	Book book2("Black Panther", "Ryan Coogler", "2h 15m");

	Book book3;

	std::cout << book1.movie_length << "\n";

	std::cout << book2.director << "\n";

	std::cout << book3.director << "\n";
	

	std::cin.get();


}

