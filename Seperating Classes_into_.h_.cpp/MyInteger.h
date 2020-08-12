// This is the header file and it's used for the declaration.....
// It contains the class specification...



#ifndef MYINTEGER_H
#define MYINTEGER_H


class MyInteger
{
	private:
		int i;

	public:
		void setI(int a)
		{
			i = a;
		}

		int getI() const
		{
			return i;
		}

};

// #endif




// OR You can write the class MyInteger (which contains the class specifications) in another way as shown below.....

class MyInteger
{
	private:
		int i;

	public:
		void setI(int);
		int getI() const;

};


#endif     // Note that in this header file, the class definitions ends here.....

	

	
	// The reamining lines of code doesn't matter anymore, it just contains the full code for the MyInteger class....
	// So including it is going to give you an error C2084 stating that the body " MyInteger::set(int a) " alraedy has a body.....
	
	void MyInteger::setI(int a)
	{
		i = a;
	}

	int MyInteger::getI() const
	{
		return i;
	}
