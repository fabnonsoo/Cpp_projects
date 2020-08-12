#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



std::string getDayOfWeek(int daynum)
{
	std::string dayname;

	if (daynum == 0)
	{
		dayname == "Sunday \n";
	}
	else if (daynum == 1)
	{
		dayname == "Monday \n";
	}
	else if (daynum == 2)
	{
		dayname == "Tuesday \n";
	}
	else if (daynum == 3)
	{
		dayname == "Wednesday \n";
	}
	else if (daynum == 4)
	{
		dayname == "Thursday \n";
	}
	else if (daynum == 5)
	{
		dayname == "Friday \n";
	}
	else if (daynum == 6)
	{
		dayname == "Saturday \n";
	}
	else
	{
		dayname == "Invalid \n";
	}

	return dayname;


	switch (daynum)
	{
	case 0:
		dayname == "Sunday \n";
		break;
	case 1:
		dayname == "Monday \n";
		break;
	case 2:
		dayname == "Tuesday \n";
		break;
	case 3:
		dayname == "Wednesday \n";
		break;
	case 4:
		dayname == "Thursday \n";
		break;
	case 5:
		dayname == "Friday \n";
		break;
	case 6:
		dayname == "Saturday \n";
		break;
	default:
		dayname == "Invalid Day Number \n";
		break;
	}

	return dayname;

}


int main()
{

	std::cout << getDayOfWeek(2) << "\n";

	return 0;

}
