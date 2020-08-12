// POINTERS IN C++.....      

// The "&" added before the variable is known as the address operator...
// A "POINTER" is a special kind of variable that points to the memory address. In otherwords, a POINTER is a variable that contains the memory address value....
// You must always add the " * " sign when making a POINTER, else the compiler will think the you're making a variable...



#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>


int main()
{


	int age = 19;
	int *pAge = &age;

	double gpa = 3.89;
	double *pGPA = &gpa;

	std::string name = "Nonso";
	std::string *pName = &name;

	std::cout << "Age: " << &age << "\n";
	std::cout << "GPA: " << &gpa << "\n";
	std::cout << "Name: " << &name << "\n";

	std::cout << pAge << "\n";
	std::cout << pGPA << "\n";
	std::cout << *pName << "\n";    // In this line I de-referenced the pointer/memory address for the name variable by including " * ".. So when I run my program I'm simply telling C++ to go grab the data value of my name i.e "Nonso" from the memory or physical address (pName) and print it out!
	std::cout << *&gpa << "\n";  
	std::cout << &*&age << "\n"; 


	return 0;

}