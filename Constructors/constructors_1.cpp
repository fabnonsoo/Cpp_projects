// Line 19 is where the "CONSTRUCTOR" starts. It can be placed anywhere under the pubic function but not under private...
// It isn't best practice to print (cout) something in a constructor. CONSTRUCTORS are basically created to give a variable an initial value.....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



class Nonclass
{
	private:
		std::string name;


	public:
		Nonclass(std::string z) 
		{
			setName(z);
		}

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

	Nonclass NO("Jesus has favoured Nonso ");
	std::cout << NO.getName() << "\n";

	Nonclass NO2("ELOHIM");
	std::cout << NO2.getName() << "\n";

	return 0;

}
