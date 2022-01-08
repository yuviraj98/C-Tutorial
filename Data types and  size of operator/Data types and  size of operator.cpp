

#include <iostream>
using namespace std;

int main()
{
	int yearOfBirth = 1998;
	char gender = 'm';
	bool isOlderThan18 = true;
	float averageGrade = 44.3;
	double balance = 53772534;

	cout << "Size of int is " <<sizeof(int) << " bytes \n ";
	cout << " Int min value is " << INT_MIN << endl;
	cout << "Int max value is " << INT_MAX << endl;

	cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes \n";
	cout << "UInt max value is " << UINT_MAX << endl;
	cout << "size of char is " << sizeof(char) << " bytes\n ";
	cout << "size of bool is " << sizeof(bool) << " bytes\n ";
	cout << "size of float is " << sizeof(float) << " bytes\n ";
	cout << "size of double is " << sizeof(double) << " bytes\n ";


	return 0; 

 
}

