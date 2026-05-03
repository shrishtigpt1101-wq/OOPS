/* WAP in C++ using Reference Variable to array and print value of all index using Reference Variable */

#include <iostream>
using namespace std;

class ArrayRef {
    int arr[5];

public:
    // Input array elements
    void getData() 
    {
        cout << "Enter 5 elements:\n";
        for (int i = 0; i < 5; i++) 
        {   cin >> arr[i];  }
    }

    // Print using reference variable
    void printUsingReference() 
    {
        int (&ref)[5] = arr;   // reference variable to array
        cout << "Array elements using reference variable:\n";
        for (int i = 0; i < 5; i++) 
        {   cout << "Index " << i << " = " << ref[i] << endl;   }
    }
};

int main() 
{
    ArrayRef obj;
    obj.getData();
    obj.printUsingReference();
    return 0;
}
