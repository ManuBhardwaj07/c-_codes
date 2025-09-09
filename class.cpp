//class
#include<iostream>
using namespace std;
class Employee 
{    
    private :
            int a,b,c;
    public :
            int d,e;
            void setdata(int a1,int b1,int c1);
            void getdata()
            {
                cout<<"The value of a is "<<a<<endl;
                cout<<"The value of b is "<<b<<endl;
                cout<<"The value of c is "<<c<<endl;
                cout<<"The value of d is "<<d<<endl;
                cout<<"The value of e is "<<e<<endl;
            }
};
void Employee::setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee manu;
    //manu.a=282;  PRIVATE MEMBER HAI TOH ACCESS NHI KR SKTE HAI 
    manu.d=78;
    manu.e=99;
    manu.setdata(39,65,87);
    manu.getdata();
    return 0;
}