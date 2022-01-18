#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (i == 10)
		{
			continue;

		}
		cout << i << endl;
	}
	return 0;

}