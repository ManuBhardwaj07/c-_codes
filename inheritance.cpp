#include<iostream>
using namespace std;
class Employee
{
    public :
            int id;
            float salary;
            Employee(){}
            Employee(int impid)
            {
                id=impid;
                salary=200;
            }
};
class Programmer:public Employee
{
    public :
            int languagecode;
            Programmer(int impid)
            {
                id=impid;
                languagecode=9;
            }
            void getdata()
            {
                cout<<id<<endl;
            }
};
int main()
{
    Employee ushant(1),arya(2);
    cout<<ushant.salary<<endl;
    cout<<arya.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
    return 0;
}