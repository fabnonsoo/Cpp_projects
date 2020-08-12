// PUBLIC AND PRIVATE FUNCTIONS IN CLASSES AND OBJECTS - (GETTERS AND SETTERS)

#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



class Nonsosclass
{
	private:
		std::string name;

	public:
		void setName(std::string x)
		{
			name = x;
		}

		std::string getName()
		{
			return name;
		}

};





int main()
{

	Nonsosclass Nonsosobject;
	Nonsosobject.setName("Margaret Ude");
	std::cout << Nonsosobject.getName() << "\n";

	std::cin.get();
	return 0;

}
