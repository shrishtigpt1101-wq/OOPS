// WOOP to count no. of object created for any class.

#include <iostream>
using namespace std;

class Test
{
    static int count;   // static data member

public:
    Test()   // constructor
    {
        count++;
    }

    void display()
    {
        cout << "Number of objects created: " << count << endl;
    }
};

// initialize static member
int Test::count = 0;

int main()
{
    Test t1;
    t1.display();

    Test t2;
    t2.display();

    Test t3;
    t3.display();

    return 0;
}