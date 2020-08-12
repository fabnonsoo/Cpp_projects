#include <iostream>


class Enemy
{
	protected:
		int attackPower;

	public:
		void setAttackPower(int a)
		{
			attackPower = a;
		}


};


class Witch : public Enemy
{
	public:
		void attack()
		{
			std::cout << "You might be a witchcraft power but you can't do me anything because I've got JESUS!  " << " Your Attack Power (Vey Very Low) at: " << attackPower << "\n";
		}


};


class Occultic: public Enemy
{
	public:
		void attack()
		{
			std::cout << "You're an occultic agent, but your power can't harm me because I've got Jehova by my side! "  << " Your Attack Power (Vey Very Low) at: " << attackPower << "\n";
		}


};



int main()
{

	Witch w;
	Occultic oc;

	Enemy *enemy1 = &w;              // This code line is valid, because witch is a type of Enemy......
	Enemy *enemy2 = &oc;             // An occultic demon can do anything an enemy can do because it's of the type Enemy....
	enemy1->setAttackPower(1);       // Here, the attackPower of a witch was set, else they'll be a gap in the program....
	enemy2->setAttackPower(6);       // Here, the attackPower of an occult was set, else they'll be a gap in the program....

	w.attack();                      // You can't use enemy1 because of its type Enemy....
	oc.attack();                     // The Enemy class does not have an attack.....


	return 0;

}
