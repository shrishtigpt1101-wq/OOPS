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
    A *a ; // parent pointer can store address of parent and child
     // A ke andar A ka hi address jayega but vo apne child ka bhi address store kar sakta hai
    A a2;
    a = &a2;    // A ke andar A ka address jayega

    B b;
    a = &b;  // A ke andar B ka address jayega

    return 0;
 
}
