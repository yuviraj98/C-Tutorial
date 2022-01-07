

#include <iostream>
using namespace std;
int main()
{
    float annualSalary;
    cout << "Please enter  a annnual salary ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is" << "  " << monthlySalary << endl;
    float expensAmount;
    cout << "Please enter a expens amount ";
    cin >> expensAmount;
    float savingAmount = monthlySalary - expensAmount;
    cout << "Saving amount " << "" << savingAmount << endl;
    float insuranceAmount;
    cout << "Please enter a insurance amount ";
    cin >> insuranceAmount;
     savingAmount = expensAmount - insuranceAmount;
    cout << "Saving amount " << " " << savingAmount << endl;
    
    return 0;
    
}

