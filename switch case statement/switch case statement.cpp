#include <iostream>
using namespace std;
int main()
{
	char oper;
	float num1,num2;
	cout << " Enter a operator ( +,-,*,/) ";
	cin >> oper;
	cout << " Enter  two number " << endl;
	cin >> num1 >> num2;
	
	switch (oper) {
	case '+':
		cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
		break;

		default :
			cout << " Error the operator is not correct ";
			break;





	}


}