/*
WOOP for Print (Char, Int, String and Array) 
*/

#include<iostream>
using namespace std;

class Print
{
public:
    void show(int n)
    {
        cout << "Integer is: " << n << endl;
    }

    void show(char c)
    {
        cout << "Character is: " << c << endl;
    }

    void show(string s)
    {
        cout << "String is: " << s << endl;
    }

    void show(int arr[], int n)
    {
        cout << "Array elements are: ";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Print p;
    int choice;

    cout << "1. Integer\n";
    cout << "2. Character\n";
    cout << "3. String\n";
    cout << "4. Array\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            p.show(10);
            break;

        case 2:
            p.show('A');
            break;

        case 3:
            p.show("Shrishti");
            break;

        case 4:
        {
            int arr[5] = {1, 2, 3, 4, 5};
            p.show(arr, 5);
            break;
        }

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
