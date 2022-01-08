#include <iostream>
using namespace std;
int main()
{
	float annuvalSalary;
	cout << "Please enter a annuval salary ";
	cin >> annuvalSalary;
	float monthlySalary = annuvalSalary / 12;
	cout << " monthlySalary salary is " << monthlySalary << endl;
	cout << "In 10 years you  will earn " << annuvalSalary * 10;


   return 0;
}

