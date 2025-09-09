#include <iostream>
using namespace std;
class Complex {
public:
    int r,i;
    Complex(int a,int b){ r=a;i=b; }
    Complex operator+(Complex c){
        return Complex(r+c.r, i+c.i);
    }
    void display(){ cout<<r<<"+"<<i<<"i"<<endl; }
};
int main(){
    Complex c1(2,3),c2(4,5);
    Complex c3=c1+c2;
    c3.display();
}
