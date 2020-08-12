#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


template <class Meg>

class Nwa
{

	Meg first;
	Meg second;

	public:
		Nwa(Meg a, Meg b)
		{
			first = a;
			second = b;
		}

		Meg bigger();

};



template <class Meg>

Meg Nwa <Meg>::bigger()
{
	return (first > second ? first : second);       // This line means-> if first > second, return first, else return second.....
}



int main()
{

	Nwa <int> nobj(67, 198);

	std::cout << "The Bigger number is: " << nobj.bigger() << "\n";

	return 0;

}  