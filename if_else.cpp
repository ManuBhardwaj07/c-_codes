#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your name "<<endl;
    cin>>age;
    switch (age)
   {
    case 18: 
            cout<<"Your age is 18"<<endl;
            break;
    case 22:
            cout<<"Your age is 22"<<endl;
            break;
    case 3 :
            cout<<"Your age is 3"<<endl;
            break;
    default :
            cout<<"No special cases "<<endl;
            break;
   }
   cout<<"Done with switch case "<<endl;
   return 0;
}