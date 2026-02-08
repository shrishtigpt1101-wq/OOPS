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

        void show()
        {
            cout << "Private: " << a_ka_private << endl;
            cout << "Protected: " << a_ka_protected << endl;
            cout << "Public: " << a_ka_public << endl;
        }
};

// Child class of A
class B : protected A   // a_ka-protected , a_ka_public as protected
{
    public:

        void showChildAccess()
        {
            // cout << a_ka_private;   // ❌ Not accessible
            cout << "Protected from A (accessible in child): " << a_ka_protected << endl;
            cout << "Public from A (accessible in child): " << a_ka_public << endl;
        }
};

class C : public B  // b_ka_public as public , a_ka_protected as protected , a_ka public as protected
{
    public:
        int c_ka_public;

};

int main() 
{
    A obj;
    obj.show();

    B objB;
    objB.showChildAccess();

    return 0;
}