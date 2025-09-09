#include<iostream>
using namespace std;

    void Swap(int &a,int &b)
    {
        int temp=a;
            a=b;
            b=temp;
    }
    int main()
    {
        int x,y;
        cout<<"Enter the value of x"<<endl;
        cin>>x;
        cout<<"Enter the value of y"<<endl;
        cin>>y;
        cout<<"Values of x & y after swapping is "<<endl;
        Swap(x,y);
        cout<<"The value of x is"<<x<<" & The value of y is "<<y<<endl;
        return 0;
    }