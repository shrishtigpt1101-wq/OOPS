/* WOOP for Inheriting Same Base Class as previous 
example Privately in Derived Class and Implement same solution. */

#include <iostream>
using namespace std;

class Base {
private:
    int a;

public:
    int b;

    void setA(int x, int y) { a = x; b = y; }
    int getA() { return a; }
};

class Derived : private Base {   // Private Inheritance
public:
    int c;

    void setValues(int x, int y, int z) {
        setA(x, y);
        c = z;
    }

    void multiply() {
        cout << "Multiplication = " << getA() * b * c;
    }
};

int main() {
    Derived obj;

    obj.setValues(4, 1, 2);   // ✅ correct way
    obj.multiply();

    return 0;
}