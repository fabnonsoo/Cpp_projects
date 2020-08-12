// OPERATOR OVERLOADING:- Operator Overloading allows you to use C++ Operators (+,-,/ and *) in a special way....
// The first "Opsloading" on line 24 is the "Opsloading OBJECT"...  The second "Opsloading" is the "Opsloading CLASS"...  Lastly, the third Opsloading is the "Opsloading parameter/argument" in brackets...  Also, "aso" is another Opsloading Object.....



#include <iostream>
#include "MyOpsloading.h"



Opsloading::Opsloading()
{

}


Opsloading::Opsloading(int a)
{
	num = a;
}


Opsloading Opsloading::operator+ (Opsloading aso)
{
	Opsloading brandNew;                        // NB: In this line, we created a brand new Opsloading Object.....
	brandNew.num = num + aso.num;           // NB: In this line, we give a number value to the brandNew Opsloading Object.....
	return (brandNew);                      // NB: In this line, we return the given brandNew Opsloading Object....
}

