// For a PURE virtual function, you don't have the ability to inherit from the Enemy Base class....
// An ABSTRACT CLASS is a class with a PURE virtual function...
// You'll notice in line 22, the PURE virtual void attack function is equals = 0.
// In a pure virtual function, there is no implementation, by this I mean no body (where you have the curly braces {  } below the virtual void attack() = 0....
// This means that whenever you use a PURE virtual function, you much use the derived class to override the Base class by including the body of the function in the Derived class....
// Without including the body of the derived class in line 41, you'll get an error....




#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>



class Enemy
{

	public:
		virtual void attack() = 0;               // This is an ABSTRACT class....

};



class Witch : public Enemy
{
	public:
		void attack()
		{
			std::cout << "Low Attack Power\n";
		}
};



class Occultic : public Enemy
{
	public:
		void attack()
		{
			std::cout << "Your Attack Power is Vey Very Low\n";
		}


};



int main()
{

	Witch w;
	Occultic oc;

	Enemy *enemy1 = &w;
	Enemy *enemy2 = &oc;

	enemy1->attack();
	enemy2->attack();

	return 0;
}
