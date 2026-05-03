/* Write a program over Complex class for overloading
   pre ++ , post ++ and () operator */

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    // Pre ++
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Post ++
    Complex operator++(int) {
        Complex temp = *this;
        real++;
        imag++;
        return temp;
    }

    // () operator
    void operator()() {
        cout<<"Complex Number = "<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main() {

    Complex c1(2,3);

    cout<<"Original: ";
    c1();

    ++c1;        // pre increment
    cout<<"After Pre ++ : ";
    c1();

    c1++;        // post increment
    cout<<"After Post ++ : ";
    c1();

    return 0;
}