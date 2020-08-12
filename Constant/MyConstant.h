// This is the header file
// It contains the class specification...


#ifndef MYCONSTANT_H
#define MYCONSTANT_H


class Constant
{
	public:
		Constant();
		void printTop();

		void printTop2() const;   // NB: After creating your constant function/any other function in the method definitions file (MyConstant.cpp), you must prototype it in the MyConstant.h as void printTop2() const;...

	protected:

	private:


}; 


#endif