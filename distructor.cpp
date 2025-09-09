#include<iostream>
using namespace std;

int count = 0;   // Keep your variable name (works fine here)

class number {
public:
    number()   // ✅ Constructor name must match class name
    {
        count++;
        cout << "This is the time when constructor is called " << count << endl;
    }

    ~number()   // ✅ Destructor is correct
    {
        cout << "This is the time when the destructor is called " << count << endl;
        count--;
    }
};

int main() {
    cout << "We are inside our main function " << endl;
    cout << "Creating first object n1" << endl;
    number n1;

    {
        cout << "Entering this block " << endl;
        cout << "Creating two more objects n2 and n3" << endl;
        number n2, n3;
        cout << "Exiting this block " << endl;
    }

    cout << "Back to main" << endl;
    return 0;
}
