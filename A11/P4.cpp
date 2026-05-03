// WOOP over ABC (Base) , XYZ (derived) class for implementing Rumtime Polymorphism.

#include <iostream>
using namespace std;

class ABC   // Base class
{
public:
    virtual void show()
    {
        cout << "This is Base Class (ABC)" << endl;
    }
};

class XYZ : public ABC   // Derived class
{
public:
    void show()
    {
        cout << "This is Derived Class (XYZ)" << endl;
    }
};

int main()
{
    ABC *ptr;   // base class pointer
    XYZ obj;

    ptr = &obj;   // point to derived object

    ptr->show();  // runtime polymorphism

    return 0;
}