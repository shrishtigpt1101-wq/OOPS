/*
WOOP in C++ to check greater of two numbers and also find GCD of given numbers,power of one number over another number
*/

#include <iostream>
using namespace std;

class NumberOperations
{
private:
    int a, b;

public:
    // Function to get input
    void getData()
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    // Function to find greater number
    void findGreater()
    {
        if (a > b)
            cout << "Greater number is: " << a << endl;
        else if (b > a)
            cout << "Greater number is: " << b << endl;
        else
            cout << "Both numbers are equal." << endl;
    }

    // Function to find GCD
    void findGCD()
    {
        int x = a, y = b, gcd;

        while (y != 0)
        {
            int rem = x % y;
            x = y;
            y = rem;
        }
        gcd = x;

        cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    }

    // Function to find power (a^b)
    void findPower()
    {
        int result = 1;

        for (int i = 1; i <= b; i++)
        {
            result = result * a;
        }

        cout << a << " raised to the power " << b << " is: " << result << endl;
    }
};

int main()
{
    NumberOperations obj;

    obj.getData();
    obj.findGreater();
    obj.findGCD();
    obj.findPower();

    return 0;
}
