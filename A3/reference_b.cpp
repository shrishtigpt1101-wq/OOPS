/* WAP in C++ using Reference Variable to array */

#include <iostream>
using namespace std;

class Array
{
private:
    int a[10];
    int n;

public:
    void getdata()
    {
        cout << "Enter n no.: ";
        cin >> n;

        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void showdata()
    {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void refrence()
    {
        int (&ref)[10] = a;   // reference variable to array

        ref[1] = 100;         // change using reference
        cout << "Modified value at index 1: " << ref[1] << endl;
    }
};

int main()
{
    Array obj;

    obj.getdata();
    obj.showdata();
    obj.refrence();
    obj.showdata();

    return 0;
}
