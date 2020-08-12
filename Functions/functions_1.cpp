#include <iostream>
#include <fstream>         // This header file is used for working with files i.e file input and output.....
#include <cmath>
#include <string>         // This header file gives you string functions......
#include <vector>




void printSomething()    // NB: In this line, the " void " in the printSomething function is known as a " RETURN TYPE " that means return nothing in C++.... Also note that you can use int, string, double and float as a RETURN TYPE as well.....
{
	std::cout << "Jesus is the owner of my Soul!" << "\n";
}


void printAnything(std::string name, int x)
{
	std::cout << name << " favorite number is: " << x << "\n";
}


int addNumbers(int a, int b, int x, int y)
{
	int answer = a + b + x + y;

	return answer;
}


int main()
{


	printSomething();

	printAnything("Nonso's", 100);

	std::cout << addNumbers(45, 56, 67, 98) << "\n";



	std::cin.get();


}