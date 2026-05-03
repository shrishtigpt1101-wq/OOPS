/* 
P1-P2 WOOP over String / Integer / Vector class (Any 2)for demonstrating
(iii) Class type to Class type conversion
*/

#include <iostream>
using namespace std;

class Integer
{
    int x;

public:
    void get()
    {
        cout << "Enter number: ";
        cin >> x;
    }

    int getValue()
    {
        return x;
    }
};

class Vector
{
    int a[3];

public:
    // constructor (class → class conversion)
    Vector(Integer obj)
    {
        int val = obj.getValue();
        for(int i = 0; i < 3; i++)
            a[i] = val;
    }

    void show()
    {
        cout << "Vector: ";
        for(int i = 0; i < 3; i++)
            cout << a[i] << " ";
    }
};

int main()
{
    Integer obj;
    obj.get();

    Vector v = obj;   // class → class conversion

    v.show();

    return 0;
}






 

#include <iostream>
#include <cstring>
using namespace std;

class Integer
{
    int x;

public:
    void get()
    {
        cout << "Enter number: ";
        cin >> x;
    }

    int getValue()
    {
        return x;
    }
};

class String
{
    char str[20];

public:
    // constructor for class → class conversion
    String(Integer obj)
    {
        int n = obj.getValue();
        sprintf(str, "%d", n);   // int → string
    }

    void show()
    {
        cout << "String = " << str;
    }
};

int main()
{
    Integer obj;
    obj.get();

    String s = obj;   // class → class conversion

    s.show();

    return 0;
}

