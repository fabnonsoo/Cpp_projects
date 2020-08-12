// ADDITIONAL WAYS OF CREATING AND COPYING STRINGS....


#include <iostream>
#include <fstream>       
#include <string>        
#include <vector>



int main()
{

	std::string s1("Biafra!");          // I assigned s1 as Biafra. i.e s1 = Biafra!

	std::string s2;
	std::string s3;

	s2 = s1;
	s3.assign(s1);                     // This line means s1 is assigned to s3, i.e s3 = s1

	std::cout << s1 << " " << s2 << " " << s3 << "\n";
	

	return 0;

}  