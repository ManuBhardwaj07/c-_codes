#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,8,15,9,20}, key=9, flag=0;
    for(int i=0;i<5;i++) if(arr[i]==key){ flag=1; break; }
    if(flag) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}
