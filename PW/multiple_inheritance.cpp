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

class B
{
    public:
        int b_ka_public;

        B()
        {
            cout<<"B ka constructor call hua \n";
        }
};

// child class of A and B
class C : public B , public A
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
//    A a;    // A ka constructor call hua sirf
//   B b;    // A and B dono ka constructor call hua // because it is a child of parent A
    C c;    // A , B and C teeno call hua   // B parent for child C // A parent for child B // its all related to each other
    // for child existence parent is called everytime
}