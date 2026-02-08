// base class has multiple parent classes having a common ancester class

#include<iostream>
using namespace std;

class parent
{
    public:

        parent()
        {
            cout<<"parent class"<<endl;
        }
};

class child1: public parent
{
    public:
        child1()
        {
            cout<<"chlid1 class"<<endl;
        }
};

class child2: public parent
{
    public:
        child2()
        {
            cout<<"chlid2 class"<<endl;
        }
};

class grandchild: public child1 , public child2
{
    public:
        grandchild()
        {
            cout<<"grandchlid class"<<endl;
        }
};

int main()
{
    grandchild gc;
    return 0;
}