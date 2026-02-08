#include<iostream>
using namespace std;

class A
{
    private:    // cannot be accessed from child
        int a_ka_private;

    public:     // can be accessed from outside
        int a_ka_public;

        void show()
        {
            cout << " mai A ka show \n";
        }
};

class B : public A
{
    public:
    int b_ka_public;

        void show()
        {
            cout << " mai B ka show \n";
        }
};

int main() 
{
    A objA;
    objA.show();   // from A

    B objB;
    objB.show();   // from B

    objB.A::show(); // to call A's show function from B's object

    return 0;
 
}
