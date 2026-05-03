/* 
P1-P2 WOOP over String / Integer / Vector class (Any 2)for demonstrating
(ii) Basic Type to Class type conversion.
*/

#include <iostream>
using namespace std;

class Integer
{
    int x;

public:
    Integer() {}
    // constructor for conversion
    Integer(int a)
    {
        x = a;
    }

    void show()
    {
        cout << "Value = " << x;
    }
};

int main()
{
    int n = 10;

    Integer obj;   // object
    obj = n;       // basic → class conversion

    obj.show();

    return 0;
}






#include <iostream>
using namespace std;

class Vector
{
    int a[3];

public:
    Vector() {}
    // constructor
    Vector(int x)
    {
        for(int i = 0; i < 3; i++)
            a[i] = x;   // fill all elements with x
    }

    void show()
    {
        for(int i = 0; i < 3; i++)
            cout << a[i] << " ";
    }
};

int main()
{
    int n = 5;

    Vector v;
    v = n;   // basic → class conversion

    v.show();

    return 0;
}






#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[20];

public:
    String() {}
    // constructor for conversion
    String(char s[])
    {
        strcpy(str, s);
    }

    void show()
    {
        cout << "String = " << str;
    }
};

int main()
{
    char name[] = "Shrishti";

    String s;
    s = name;   // basic → class conversion

    s.show();

    return 0;
}