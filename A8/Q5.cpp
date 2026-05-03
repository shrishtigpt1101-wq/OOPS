/* Write a program to implement the concept of Function Overriding using a simple class. */

#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {   // Function overriding
        cout << "This is Derived class function" << endl;
    }
};

int main() {
    Derived obj;
    obj.show(); // it call the show function of Derived class , not the Base class
    return 0;
}