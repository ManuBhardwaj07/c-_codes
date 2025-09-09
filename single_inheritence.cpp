//SINGLE INHERITANCE

#include<iostream>
using namespace std;
class Base
{
    int data1;
    public :
            int data2;
            void set_data()
            {
                data1=20;
                data2=30;
            }
            int get_data1()
            {
                return data1;
            }
            int get_data2()
            {
                return data2;
            }
};
class Derived:public Base
{
    int data3;
    public :
            void process()
            {
                data3=data2*get_data1();
            }
            void display()
            {
                cout<<"Value of data 1 is "<<get_data1()<<endl;
                cout<<"Value of data 2 is "<<data2<<endl;
                cout<<"Value of data 3 is "<<data3<<endl;
            }
};
int main()
{
    Derived d1;
    d1.set_data();
    d1.process();
    d1.display();
    return 0;
}