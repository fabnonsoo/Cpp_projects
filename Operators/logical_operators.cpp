// Write a program for a night club that allows people whose age is/above 21 OR has money that's above or equal to $500 to come in..... 


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{

	int age = 19;
	int money = 500;


	if (age >= 24 || money >= 500)    // NB: Both "age and money" are test. Hence, we can have multiple test here.. e.g:- if (age >= 24 || money >= 500 || test || test || test)
	{
		std::cout << "You are allowed into the club. Have fun!" << "\n";
	}
	else
	{
		std::cout << "Sorry you can't get in because you're not >= 24 years old and don't have >= $500" << "\n";
	}

	return 0;

}
