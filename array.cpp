// ARRAY 


#include<iostream>
using namespace std;
int main()
{
    int i;
    int marks[]={2,8,4,57,7,9};
    //cout<<"the value of marks [0] is "<<marks[0];
    
    // USING FOR LOOP 
    /*for(i=0;i<10;i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }*/
    
    //USING WHILE LOOP
   /* i=0;
    while(i<7)
    {
        cout << "The value of marks "<<i<<" is "<<marks[i] << endl;
        i++;
    }*/
    
    //USING DO WHILE LOOP 
    i=0;
    do
    {
        cout << "The value of marks "<<i<<" is "<<marks[i] << endl;
        i++;
    }
    while(i<=3);
    return 0;
}