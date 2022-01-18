#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	return 0;
}