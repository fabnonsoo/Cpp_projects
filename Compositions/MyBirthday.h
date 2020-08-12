// COMPOSITIONS:- Composition in C++ basically means using objects of other classes inside your class/current class.....


#ifndef MYBIRTHDAY_H
#define MYBIRTHDAY_H


class Birthday
{
	public:
		Birthday(int m, int d, int y);
		void printDate();

	private:
		int month;
		int day;
		int year;

};


#endif