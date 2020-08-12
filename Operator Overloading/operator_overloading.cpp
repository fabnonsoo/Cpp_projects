// OPERATOR OVERLOADING:- Operator Overloading allows you to use C++ Operators (+,-,/ and *) in a special way....


#include <iostream>

#include "MyOpsloading.h"
#include "MyOpsloading.h"



int main()
{

	Opsloading a (90);
	Opsloading b (100);
	Opsloading c;

	c = a + b;                       // This line works because of the operator+ overloading that is returned in MyVictor.cpp. Hence, no need for: c.num = a.add(b)

	std::cout << c.num << "\n";
	

	return 0;

}

