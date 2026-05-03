/* 
WOOP over String / Integer / Vector class (Any 2)for demonstrating
(i) Class type to Basic Type
*/

#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[20];

public:
    void get()
    {
        cout << "Enter string: ";
        cin >> str;
    }

    // class to basic conversion
    operator char*()
    {
        return str;
    }
};

int main()
{
    String s;
    s.get();

    char *p;
    p = s;   // conversion

    cout << "String is: " << p;

    return 0;
}




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

    // class to basic conversion
    operator int()
    {
        return x;
    }
};

int main()
{
    Integer obj;
    obj.get();

    int n;
    n = obj;   // conversion

    cout << "Number is: " << n;

    return 0;
}




#include <iostream>
using namespace std;

class Vector
{
    int a[5];

public:
    void get()
    {
        cout << "Enter 5 elements: ";
        for(int i = 0; i < 5; i++)
            cin >> a[i];
    }

    // class to basic conversion
    operator int()
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
            sum += a[i];

        return sum;   // return basic type
    }
};

int main()
{
    Vector v;
    v.get();

    int total;
    total = v;   // conversion

    cout << "Sum = " << total;

    return 0;
}