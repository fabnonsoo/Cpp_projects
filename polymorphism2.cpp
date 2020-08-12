// POLYMORPHISM:- The idea and beauty behind polymorphism is that you can use the same function in this case attack() to produce different results...


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>



class Enemy
{

	public:                         // NB: Whenever you make a function virtual as seen below, you're trying to use that fuction polymorphically, i.e the derived classes is suppose to know that it's meant to use the specific object functions (enemy1 and enemy2) of its classes instead of using that of the Enemy base class....
		virtual void attack()
		{

		}

};


class Witch: public Enemy
{
	public:
		void attack()
		{
			std::cout << "You might be a witchcraft power but you can't do me anything because I've got JESUS! Your Attack Power is Vey Very Low " << "\n";
		}
};



class Occultic: public Enemy
{
	public:
		void attack()
		{
			std::cout << "You're an occultic agent, but your power can't harm me because I've got Jehova by my side! Your Attack Power is Vey Very Low " << "\n";
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
