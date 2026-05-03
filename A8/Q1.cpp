/* WOOP for implementing Single Inheritance Over Base class 
(having private and public D.M.) and derived it publicly in class 
(having 1 D.M.) 
write operations of multiply all 3 D.M. in Derived class. */

#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int a;          // private data member

public:
    int b=3;          // public data member

    // Function to set private value
    void setA(int x) {
        a = x;
    }

    // Function to get private value
    int getA() {
        return a;
    }
};

// Derived class (public inheritance)
class Derived : public Base {
private:
    int c;   // one data member in derived class

public:
    void setC(int y) {
        c = y;
    }

    void multiply() {
        int result = getA() * b * c;
        cout << "Multiplication = " << result << endl;
    }
};

// Main function
int main() {
    Derived obj;

    obj.setA(2);   // set private member of base

    obj.setC(4);   // derived member

    obj.multiply();

    return 0;
}