#include<iostream>
using namespace std;

class Parent
{
    public:
        int x;

    protected :
        int y;
    
    private :
        int z;

};


class child: public Parent
{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class child2: private Parent
{
    // x will be private
    // y will be private
    // z will be inaccessible
};

class child3 : protected Parent
{
    // x will be protected
    // y will be protected
    // z will be inaccessible
};

int main()
{

    return 0;
}