/* WOOP to count no. of object created for any class. */

#include <iostream>
using namespace std;

class Test
{
    static int count;   // static data member

public:
    Test()              // constructor
    {
        count++;
    }

    void showCount()
    {
        cout << "Number of objects created: " << count << endl;
    }
};

// initialize static member
int Test::count = 0;

int main()
{
    Test t1;
    t1.showCount();

    Test t2;
    t2.showCount();

    Test t3;
    t3.showCount();

    return 0;
}
