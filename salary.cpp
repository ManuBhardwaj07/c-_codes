#include <iostream>
#include <string>

using namespace std;

int main()
{

    string userName;
    double basicSalary, hra, da, grossSalary;

    // Ask for user's name
    cout << "Enter your name: ";
    getline(cin, userName);

    // Ask for basic salary
    cout << "Enter your basic salary: ";
    cin >> basicSalary;

    // Calculate HRA (5% of basic salary)
    hra = (basicSalary / 100) * 5;

    // Calculate DA (10% of basic salary)
    da = (basicSalary / 100) * 10;

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Display results
    cout << "Name: " << userName << endl;
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}
