#include <iostream>
using namespace std;
int main() {
    int a=3,b=8,c=5;
    if(a>b && a>c) cout<<"Largest="<<a;
    else if(b>c) cout<<"Largest="<<b;
    else cout<<"Largest="<<c;
    return 0;
}
