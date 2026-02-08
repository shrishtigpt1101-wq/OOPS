#include<iostream>
using namespace std;

class parent1
{
    public:

        parent1()
        {
            cout<<"parent1 class"<<endl;
        }
};

class parent2
{
    public:

        parent2()
        {
            cout<<"parent2 class"<<endl;
        }
};

class child1: public parent1
{
    public:
        child1()
        {
            cout<<"chlid1 class"<<endl;
        }
};

class child2: public parent1
{
    public:
        child2()
        {
            cout<<"chlid2 class"<<endl;
        }
};

int main()
{
    child1 c1;   // will call parent1 → child1
    child2 c2;   // will call parent1 → child2   
    return 0;
}