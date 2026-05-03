// Extend Program 1 to add 3rd constructor and destructor and perform comparison of a Complex Number

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
        cout << "Default Constructor Called\n";
    }

    // 2. Parameterized Constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
        cout << "Parameterized Constructor Called\n";
    }

    // 3. Copy Constructor
    Complex(Complex &c) {
        real = c.real;
        imag = c.imag;
        cout << "Copy Constructor Called\n";
    }

    // Function to display
    void display() {
        cout << real << " + " << imag << "i\n";
    }

    // Function to compare two complex numbers
    void compare(Complex c) {
        if (real == c.real && imag == c.imag)
            cout << "Both Complex Numbers are Equal\n";
        else
            cout << "Complex Numbers are NOT Equal\n";
    }

    // Destructor
    ~Complex() {
        cout << "Destructor Called\n";
    }
};

int main() {
    Complex c1;            // Default
    Complex c2(5, 3);      // Parameterized
    Complex c3(c2);        // Copy

    cout << "\nc1: ";
    c1.display();

    cout << "c2: ";
    c2.display();

    cout << "c3: ";
    c3.display();

    cout << "\nComparison between c2 and c3:\n";
    c2.compare(c3);

    return 0;
}