// PROTECTED MEMBER VARIABLE/FUNCTION IN A CLASS....

// The concept of the protected function is; -

// We can inherit the public member of a Base class...
// Here, you can access/inherit the protected member of a Base class. So, if you run line 18, it will definitely run.....
// We're not allowed to inherit a private member of a Base class (MyUncle.h). So, if you run line 19 you'll get an error --> Refer to MyUncle.h... 


#include <iostream>
#include "MyUncle.h"
#include "MyNephew.h"


void Nephew::doSomething()
{
	publicv = 1;
	protectedv = 5;
	//privatev = 10;

}  