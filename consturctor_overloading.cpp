//CONSTRUCTOR OVERLOADING

#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
            complex(int x,int y)
            {
                a=x;
                b=y;
            }
            complex(int x)
            {
                a=x;
                b=0;
            }
            complex()
            {
                a=0;
                b=0;
            }    
            void display()
            {
                cout<<"The number is ("<<a<<" + "<<b<<"i"<<")"<<endl;
            }    
};
int main()
{
    complex c1(8,2);
    c1.display();
    
    complex c2(4,3);
    c2.display();

    complex c3(5,5);
    c3.display();
}