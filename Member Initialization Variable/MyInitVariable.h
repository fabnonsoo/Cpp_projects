/// MEMBER INITIALIAZATIONS VARIABLES.....

// This is the header file
// It contains the class specification...


#ifndef MYINITVARIABLE_H
#define MYINITVARIABLE_H


class InitVariable
{
	public:
		InitVariable(int a, int b);    // We assigned or set the regular variable (regVar) to -> " int a "/ and assigned the constant variable to -> " int b ".....
		void print();


	private:
		int regVar;
		const int constantVar;

};

#endif   