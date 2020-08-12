// BEING A FRIEND/MAKING A FUNCTION A FRIEND OF A CLASS....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


class StankPank
{
	public:
		StankPank()
		{
			stinkyVar = 0;
		}

	private:
		int stinkyVar;

	friend void stinkysFriend(StankPank &sfo);


};


void stinkysFriend(StankPank &spo)
{
	spo.stinkyVar = 99;
	std::cout << spo.stinkyVar << "\n";
}



int main()
{

	StankPank bob;
	stinkysFriend(bob);

	return 0;

}

