#include<iostream>
using namespace std;

class Complex {
    int a, b;
public:
    // Default constructor
    Complex(void) {
        a = 0;
        b = 0;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
 