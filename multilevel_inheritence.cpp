#include <iostream>
using namespace std;

class Grandparent {
public:
    void showGrandparent() {
        cout << "This is Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void showParent() {
        cout << "This is Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "This is Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.showGrandparent();
    obj.showParent();
    obj.showChild();
    return 0;
}
