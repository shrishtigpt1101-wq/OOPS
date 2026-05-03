/*Overload Unary (--) and Binary (+,-) over Complex Class.*/

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    // Default Constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized Constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Binary + operator
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Binary - operator
    Complex operator - (Complex c) // using member function
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // Unary -- operator
    // Prefix -- operator
    void operator -- () {
        --real;
        --imag;
    }
    // Postfix -- operator
    void operator--(int) { 
        real--;                // decrease
        imag--;          // return old value
    }
            
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {

    Complex c1(5,3), c2(2,1), c3;

    cout<<"First Complex Number: ";
    c1.display();

    cout<<"Second Complex Number: ";
    c2.display();

    // Binary +
    c3 = c1 + c2;
    cout<<"Addition: ";
    c3.display();

    // Binary -
    c3 = c1 - c2;
    cout<<"Subtraction: ";
    c3.display();

    // Unary --
    --c1;
    cout<<"After Unary -- on first complex: ";
    c1.display();

    // Unary -- (postfix)
    c1--;
    cout<<"After Unary -- (postfix) on first complex: ";
    c1.display();

    return 0;
}