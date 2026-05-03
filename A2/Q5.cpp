/*
WOOP C++ with class Array and write a program to sort, search within array.
*/
#include <iostream>
using namespace std;

class Array
{
private:
    int arr[50];
    int n;

public:
	void getData();
	void display();
	
	void sortArray()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "\nArray sorted successfully.\n";
    }

    void searchElement()
    {
        int key, flag = 0;
        cout << "\nEnter element to search: ";
        cin >> key;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << "Element found at position: " << i + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "Element not found.\n";
    }

};

void Array::getData()
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
            cin >> arr[i];
    }
}

void Array::display()
{
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    Array a;
    a.getData();
    a.sortArray();
    a.display();
    a.searchElement();
    return 0;
}