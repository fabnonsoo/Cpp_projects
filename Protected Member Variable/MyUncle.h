// PROTECTED FUNCTION IN A CLASS...

// We can inherit the public member of a Base class...
// Here, you can access/inherit the protected member of a Base class. So, if you run this line of code, it will definitely run.....
// We're not allowed to inherit a private member of a Base class (MyUncle.h). So, if you run the line 19 code in "MyNephew.cpp", you'll get an error... 


#ifndef MYUNCLE_H
#define MYUNCLE_H



class Uncle
{

	public:
		int publicv;

	protected:
		int protectedv;

	private:
		int privatev;

};


#endif  