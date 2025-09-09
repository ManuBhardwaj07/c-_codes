#include <iostream>
using namespace std;
class Calc {
public:
    int add(int a,int b){ return a+b; }
    double add(double a,double b){ return a+b; }
};
int main(){
    Calc c;
    cout<<c.add(2,3)<<endl;
    cout<<c.add(2.5,3.7);
    return 0;
}
