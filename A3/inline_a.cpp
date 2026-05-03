/* WAP in C++ to perform Square, Greater Check, C to F using Inline Function */


// Inline functions are defined inside the class definition and are expanded at the point of call, which can improve performance for small, frequently called functions.
#include <iostream>
using namespace std;

class InlineDemo {
    int a, b;
    float c;

public:
    // get data from user
    void getData() 
	{
        cout << "Enter number for square: ";
        cin >> a;

        cout << "Enter two numbers for greater check: ";
        cin >> a >> b;

        cout << "Enter temperature in Celsius: ";
        cin >> c;
    }

    // inline square
    inline int square(int x) 
	{
        return x * x;   // it must to use return in inline function because it is expanded at the point of call, and it needs to return the result to the caller.
    }

    // inline greater check
    inline int greater(int x, int y) 
	{
        return (x > y) ? x : y;
    }

    // inline C to F
    inline float cToF(float temp) 
	{
        return (temp * 9 / 5) + 32; // C to F conversion formula 
    }

    // display results
    void show() 
	{
        cout << "\nSquare = " << square(a);
        cout << "\nGreater = " << greater(a, b);
        cout << "\nFahrenheit = " << cToF(c);
    }
};

int main() {
    InlineDemo obj;

    obj.getData();
    obj.show();

    return 0;
}
