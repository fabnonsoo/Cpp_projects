// INHERITANCE IN C++....

#include <iostream>


class Chef         // NB: This " class Chef " is known as a Super-class!
{
	public:
		void makeChicken()
		{
			std::cout << "The chef makes good finger licking chicken\n";
		}

		void makeSalad()
		{
			std::cout << "The chef makes good salad\n";
		}

		void makeSpecialDish()
		{
			std::cout << "The chef makes good BBQ ribs\n";
		}


};


class ItalianChef : public Chef  // NB: This " class ItalianChef " is known as a Sub-class!
{
	public:
		void makePasta()
		{
			std::cout << "The chef makes yummy pasta\n";
		}

		void makeSpecialDish()
		{
			std::cout << "The chef makes good chicken parm\n";
		}



};



int main()
{
	Chef chef;
	chef.makeChicken();
	chef.makeSpecialDish();

	ItalianChef italianChef;
	italianChef.makeChicken();
	italianChef.makePasta();
	italianChef.makeSpecialDish();            // This line overrides the attribute of - " chef.makeSpecialDish(); in the "class Chef". Therefore, whwen we run the program, instead of italian.makeSpecialDish() to print its inheritance attribute from chef.makeSpecialDish(), it prints its own specification being - "The chef makes chicken parm"....

	return 0;

} 