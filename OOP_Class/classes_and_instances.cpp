// OBJECT/INSTANCE FUNCTIONS....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



class Student
{
public:
	std::string name;
	std::string major;
	double GPA;

	Student(std::string Name, std::string Major, double gpa)
	{
		name = Name;
		major = Major;
		GPA = gpa;
	}

	bool hasHonors()
	{
		if (GPA >= 3.5)
		{
			return true;
		}
		return false;

	}

};



int main()
{

	Student MIT_Student("Victor", "Business Analytics", 3.6);

	Student UW_Seattle_Student("Nonso", "Data Science", 3.43);

	std::cout << UW_Seattle_Student.hasHonors() << "\n";
	std::cout << MIT_Student.GPA << "\n";


	std::cin.get();

}
