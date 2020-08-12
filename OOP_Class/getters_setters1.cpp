// GETTERS AND SETTERS IN C++....

// Now since the void function: "void()" is under public in the class Movie, we can now modify the ratings or set it to whatever value we want. Therefore, we'll add the code in Line 57, giving us the ability to modify our ratings parameter in our object class i.e:- deadpool.setRating("PG-13");
// if we remove the "deadpool.setRating("PG-13")" in Line 57, we'll still be able to run the code provided this code:- " Movie avengers("Deadpool", "Ryan Reynolds", "PG-13"); " is still in the program... 

#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


using namespace std;

class Movie
{
	public:
		string title;
		string actor;

		Movie(string Title, string Actor, string aRating)
		{
			title = Title;
			actor = Actor;
			setRating(aRating);
		}

		void setRating(string aRating)
		{
			if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
			{
				rating = aRating;
			}
			else
			{
				rating = "NR";
			}
		}


		std::string getRating()
		{
			return rating;
		}

	private:
		std::string rating;

};


int main()
{


	Movie deadpool("Deadpool", "Ryan Reynolds", "PG-13");

	deadpool.setRating("PG-13"); 

	std::cout << deadpool.getRating() << "\n";

	std::cin.get();

}
