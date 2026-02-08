#include<iostream>
using namespace std;

class A
{
    private:    // cannot be accessed from child
        int a_ka_private;

    protected:  // can be accessed from child
        int a_ka_protected;

    public:     // can be accessed from outside
        int a_ka_public;

        A()
        {
            cout<<"A ka constructor call hua \n";
        }
};

// Child class of A
class B : protected A   // a_ka-protected , a_ka_public as protected
{
    public:
        int b_ka_public;

        B()
        {
            cout<<"B ka constructor call hua \n";
        }
};

class C : public B  // b_ka_public as public , a_ka_protected as protected , a_ka public as protected
{
    public:
        int c_ka_public;

        C()
        {
            cout<<"C ka constructor call hua \n";
        }

};


int main() 
{
    A a;    // A ka constructor call hua sirf
    B b;    // A and B dono ka constructor call hua // because it is a child of parent A
    C c;    // A , B and C teeno call hua   // B parent for child C // A parent for child B // its all related to each other
    // for child existence parent is called everytime
}