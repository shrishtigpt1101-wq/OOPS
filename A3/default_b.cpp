// WOOP/WAP in C++ to Implement S.I. or C.I. function using Default Arguments.

#include <iostream>
#include <cmath>
using namespace std;

class Interest
{
    public:
        // Simple Interest using default rate and time
        void SI(float p, float r = 5, float t = 1)
        {
            float si = (p * r * t) / 100;
            cout << "Simple Interest = " << si << endl;
        }

        // Compound Interest using default rate and time
            void CI(float p, float r = 5, float t = 1)
        {
             float ci = p * pow((1 + r / 100), t) - p;
            cout << "Compound Interest = " << ci << endl;
        }
};

int main()
{   Interest obj;
    cout << "Using default rate & time:\n";
    obj.SI(1000);
    obj.CI(1000);
    cout << "\nUsing given rate & time:\n";
    obj.SI(1000, 10, 2);
    obj.CI(1000, 10, 2);
    return 0;
}
