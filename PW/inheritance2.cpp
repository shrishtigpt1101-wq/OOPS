#include<iostream>
using namespace std;

class A
{
    private:    // cannot be accessed from child, cannot be inherited
        int a_ka_private;

    protected:  // can be accessed from child, can be inherited
        int b_ka_protected;

    public:     // can be accessed from outside, can be inherited
        int c_ka_public;

        void setValues(int a, int b, int c)
        {
            a_ka_private = a;
            b_ka_protected = b;
            c_ka_public = c;
        }

        void show()
        {
            cout << "Private: " << a_ka_private << endl;
            cout << "Protected: " << b_ka_protected << endl;
            cout << "Public: " << c_ka_public << endl;
        }
};

// Child class of A
class B : public A
{
    public:
        void showChildAccess()
        {
            // cout << a_ka_private;   // ❌ Not accessible
            cout << "Protected from A (accessible in child): " << b_ka_protected << endl;
            cout << "Public from A (accessible in child): " << c_ka_public << endl;
        }
};

int main() 
{
    A obj;
    obj.setValues(10, 20, 30);
    obj.show();

    B objB;
    objB.setValues(100, 200, 300); // set values in parent class A
    objB.showChildAccess();

    return 0;
}