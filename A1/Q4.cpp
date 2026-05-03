/*
Read Array of 10 distinct elements and print it.
    👉 If a duplicate value is entered, it should NOT be added to the array
    👉 The program should ask again until 10 unique values are stored.
*/

#include <iostream>
using namespace std;

class ArrayDistinct
{
    int a[10];

public:
    // Function to read 10 distinct elements
    void readArray()
    {
        int count = 0;  // count initialized here
        cout << "Enter 10 distinct elements:\n";

        while (count < 10)
        {
            int temp;
            cin >> temp;

            // check for duplicate in array
            bool duplicate = false;
            for (int i = 0; i < count; i++)
            {
                if (a[i] == temp)
                {
                    duplicate = true;
                    break;
                }
            }

            if (duplicate)
            {
                cout << "Duplicate value! Enter a different number: ";
            }
            else
            {
                a[count] = temp;
                count++;
            }
        }
    }

    // Function to display array
    void displayArray()
    {
        cout << "\nArray elements are:\n";
        for (int i = 0; i < 10; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main()
{
    ArrayDistinct obj;

    obj.readArray();     // read input
    obj.displayArray();  // display array

    return 0;
}
