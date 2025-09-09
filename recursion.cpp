#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return (a+b);
}
int sum(int a,int b,int c)
{
    return (a+b+c);
}
//Volume of a cube 
int vol(int a)
{
    return (a*a*a);
}
//volume of a rectangle
int vol(int a,int b,int c)
{
    return (a*b*c); 
}
//Volume of a sphere
int vol(int a,int b)
{
    return ((4/3)*3.14*a*a*a);
}
int main()
{
    int a,b,c;
    cout<<"Enter the value of a = "<<endl;
    cin>>a;
    cout<<"Enter the value of b = "<<endl;
    cin>>b;
    cout<<"Enter the value of c = "<<endl;
    cin>>c;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,c)<<endl;
    cout<<sum(c,b)<<endl;
    cout<<sum(b,b)<<endl;
    cout<<sum(a,a)<<endl;
    cout<<sum(c,c)<<endl;
    cout<<vol(a,b,c)<<endl;
    cout<<vol(a)<<endl;
    cout<<vol(a,b)<<endl;
    
}