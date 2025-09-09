#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10}, key=8, l=0,h=4,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==key){ cout<<"Found"; return 0; }
        else if(arr[mid]<key) l=mid+1;
        else h=mid-1;
    }
    cout<<"Not Found";
    return 0;
}
