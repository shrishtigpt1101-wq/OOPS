// WOOP using any two constructors over Complex class. 

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // 1. Default Constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // 2. Parameterized Constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;          // Calls default constructor
    Complex c2(5, 3);    // Calls parameterized constructor

    cout << "Default Constructor: ";
    c1.display();

    cout << "Parameterized Constructor: ";
    c2.display();

    return 0;
}