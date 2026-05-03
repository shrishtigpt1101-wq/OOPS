// WAP in C++ to find 2nd highest element of array.

#include <iostream>
using namespace std;

class ArrayOperation
{
    int arr[100], n;

public:
    // Function to take input
    void getData()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    // Function to find 2nd highest element
    void secondHighest()
    {
        int highest, second;

        highest = second = -1;  // array contains only positive numbers
        // We assume all array elements are positive
        // highest initially is smaller than any array element, so the first array element will become highest automatically.

        for (int i = 0; i < n; i++) 
        {
            if (arr[i] > highest)// If current element is bigger than highest
            {
                second = highest; //Previous highest becomes 2nd highest
                highest = arr[i]; // Update highest with current element
            }
            else if (arr[i] > second && arr[i] != highest) // If current element is greater than second but not equal to highest
            {
                second = arr[i];
            }
        }

        if (second == -1)
            cout << "Second highest element does not exist";
        else
            cout << "Second highest element is: " << second;
    }
};

int main()
{
    ArrayOperation obj;
    obj.getData();
    obj.secondHighest();
    return 0;
}
