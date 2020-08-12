// COMPOSITIONS IN C++.....   


// This is the header file
// It contains the class specification...


#ifndef MYPEOPLE_H
#define MYPEOPLE_H


#include <string>
#include "MyBirthday.h"

using namespace std;


class People
{
	public:
		People(string x, Birthday bo);
		void printInfo();                // Prototyping this line [ (void printInfo() ] from "People.cpp" helps to print the information on the screen.......

	private:
		string name;
		Birthday dateOfBirth;


};



#endif