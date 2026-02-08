#include<iostream>
using namespace std;

class A
{
    private:    // cannot be accessed from child
        int a_ka_private;

    public:     // can be accessed from outside
        int a_ka_public;

        A()
        {
            a_ka_private = 10;
            a_ka_public = 20;
        }

        void showA()
        {
            cout << "Private from A (only inside A): " << a_ka_private << endl;
            cout << "Public from A (accessible in children): " << a_ka_public << endl;
        }
};

class B : virtual public A   // virtual inheritance
// virtual is used to avoid ambiguity in diamond problem
// ambiguity arises when two classes B and C inherit from A and class D inherits from both B and C
// ambiguity means which copy of A's members should be inherited by D
{
    public:
        void showB()
        {
            cout << "Accessing A's public from B: " << a_ka_public << endl;
        }
};

class C : virtual public A   // virtual inheritance (important!)
{
    public:
        void showC()
        {
            cout << "Accessing A's public from C: " << a_ka_public << endl;
        }
};

class D : public B , public C   // D inherits from both B and C
{
    public:
        void showD()
        {
            cout << "Accessing A's public from D: " << a_ka_public << endl;
        }
};

int main() 
{
    D objD;

    objD.showA();   // from A
    objD.showB();   // from B
    objD.showC();   // from C
    objD.showD();   // from D

    return 0;
}
