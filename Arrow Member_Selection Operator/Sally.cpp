// ARROW MEMBER SELECTION OPERATOR.....


// There are two ways to access something inside a "Class" in C++
// One way is using an "OBJECT", the other way is using a "POINTER".....


#include <iostream>

#include "MySally.h"
#include "MySally.h"



int main()
{  
	
	// Using an "OBJECT" to access something inside a Class...
	
	Sally SallyObject;

	SallyObject.printCrap();   
	
	
	// Using a "POINTER" to access something inside a Class...
	
	Sally *SallyPointer = &SallyObject;

	SallyPointer->printCrap();
	
	
	std::cout << "Hello Toronto!" << "\n";


	std::cout << "Print x: "  << "\n";

	
	return 0;


}