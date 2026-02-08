#include<iostream>
using namespace std;

class A
{
    private:    // canot be inherited and accessed outside the class
        int a_ka_private;
    protected:  // cannot be accessed outside the class but can be inherited
        int b_ka_protected;
    public: // can be accessed anywhere and can be inherited
        int c_ka_public;
};

class B : public A  // A se jo variable inherit honge wo public honge B ke liye
{
    public:
        int b_ka_public;

        void show()
        {
            // cout << a_ka_private;   // ❌ Not allowed
            cout << b_ka_protected << endl; // ✅ Allowed (protected in A → accessible in child)
            cout << c_ka_public << endl;    // ✅ Allowed (public in A → accessible)

        }

};

class C : protected A  // A se jo variable inherit honge wo protected honge C ke liye
{
    public:

    void show()
    {
        // cout << a_ka_private;   // ❌ Not allowed
        cout << b_ka_protected << endl; // ✅ Accessible inside C
        cout << c_ka_public << endl;    // ✅ Accessible inside C
    }


};

class D : private A  // A se jo variable inherit honge wo private honge D ke liye
{
    public:

     void show()
    {
        // cout << a_ka_private;   // ❌ Not allowed
        cout << b_ka_protected << endl; // ✅ Accessible inside D
        cout << c_ka_public << endl;    // ✅ Accessible inside D
    }
};

int main()
{
    A a;
    a.c_ka_public = 10; // ✅ Allowed (public)
    // a.a_ka_private = 10; // not allowed
    // a.b_ka_protected = 10; // not allowed

    B b;
    b.b_ka_public = 10;  // ✅ Allowed
    b.c_ka_public = 20;  // ✅ Allowed (inherited as public)
    // b.b_ka_protected = 10; // ❌ Not allowed (protected in A, stays protected)
    // b.a_ka_private = 10;   // ❌ Not allowed (private never inherited)
    b.show();

    C c;
    // c.a_ka_private = 30; // ❌ Not allowed (never inherited)
    // c.b_ka_protected = 30; // ❌ Not allowed (became protected in C)
    // c.c_ka_public = 30; // ❌ Not allowed (became protected in C)
    c.show();

    D d;
   // d.a_ka_private = 40; // ❌ Not allowed (never inherited)
    // d.b_ka_protected = 40; // ❌ Not allowed (became private in D)
    // d.c_ka_public = 40; // ❌ Not allowed (became private in D)
    d.show();


    return 0;

}