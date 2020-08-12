// Basically whenever we're progtramming using a "virtual" attribute/virtual function (in this case:- "virtual void attack()" in polymorphism), the derived classes is going to override the virtual void attack() function of the "Enemy" Based class...
// This is known as Basic virtual function....
// So when you run this program, you'll see that:-> std::cout << "This is the Enemy class \n"; won't print but the functions of the derived class will print..



#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>



class Enemy
{

	public:
		virtual void attack()
		{
			std::cout << "This is the Enemy class \n";
		}

};



class Witch : public Enemy
{
	public:
		void attack()
		{
			std::cout << "Evil attacker\n";
		}
};



class Occultic : public Enemy
{
	public:
		void attack()
		{
			std::cout << "Very violent attacker \n";
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
