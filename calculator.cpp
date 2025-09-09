// EXCERCISE ON INHERITANCE FOR HYBID CALCULATOR

#include <iostream>
#include <cmath>
using namespace std;
class Simple_calculator
{
int a, b;

public:
void input()
{
cout << "Enter 1st number " << endl;
cin >> a;
cout << "Enter 2st number " << endl;
cin >> b;
}
void output()
{
cout << "MULTIPLICATION of 1st & 2nd number is " << a * b << endl;
if(b!=0)
cout << "DIVISION of 1st & 2nd number is " << (float)a / b << endl;
else
cout << "Division not possible (denominator is zero)" << endl;
cout << "ADDITION of 1st & 2nd number is " << a + b << endl;
cout << "SUBTRACTION of 1st & 2nd number is " << a - b << endl;
}
};
class Scientific_calculator
{
int a, b;
double c;

public:
void input()
{
cout << "Enter 1st number " << endl;
cin >> a;
cout << "Enter 2st number " << endl;
cin >> b;
cout << "Enter the angle in (radian) " << endl;
cin >> c;
}
void operation()
{
cout << "(a+b)^3 is " << pow((a + b), 3) << endl;
cout << "(a+b)^2 is " << pow((a + b), 2) << endl;
cout << "The value of a to the power b is " << pow(a, b) << endl;
cout << "Sin(radian) is " << sin(c) << endl;
cout << "Cos(radian) is " << cos(c) << endl;
cout << "Tan(radian) is " << tan(c) << endl;
}
};
class Hybrid_calculator : public Simple_calculator, public Scientific_calculator
{
public:
void display()
{
cout << "------ HYBRID CALCULATOR RESULTS------ " << endl;
}
};
int main()
{
Hybrid_calculator c1;
c1.display();

cout << "\n--- Simple Calculator ---\n";
c1.Simple_calculator::input();
c1.output();

cout << "\n--- Scientific Calculator ---\n";
c1.Scientific_calculator::input();
c1.operation();

return 0;

}
