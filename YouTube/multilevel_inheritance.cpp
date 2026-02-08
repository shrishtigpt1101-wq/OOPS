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

class child: public parent{
    public:
        child()
        {
            cout<<"chlid class"<<endl;
        }
};

class grandchild: public child{
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