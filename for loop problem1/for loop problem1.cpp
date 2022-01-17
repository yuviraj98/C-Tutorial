#include <iostream>
using namespace std;
int main()
{
	int num, sum;
	sum = 0;
	cout << "enter a positive enteger ";
	cin >> num;
	for (int i = 1; i <= num; ++i)
	{
		sum += i;
	}
	cout << " sum = " << sum;
	return 0;


}