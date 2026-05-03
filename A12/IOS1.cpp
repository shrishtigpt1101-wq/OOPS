// WOP for implement all 5 IOS function and Manipulators.

#include<iostream>
#include<iomanip>   // for manipulators
#include<cstring>   // for strlen()
using namespace std;

int main()
{
    char ch;
    char str[100];
    int num;
    float f;

    // ----- Input -----
    cout << "Enter a character: ";
    ch = cin.get();   // get()

    cin.ignore(1000, '\n');  // clear buffer

    cout << "Enter a string: ";
    cin.getline(str, 100);   // getline()

    cout << "Enter an integer: ";
    cin >> num;              // >>

    cout << "Enter a float value: ";
    cin >> f;

    // ----- Output using I/O Functions -----
    cout << "\n--- Output using I/O Functions ---\n";

    cout << "Character (put): ";
    cout.put(ch);            // put()
    cout << endl;

    cout << "String (write): ";
    cout.write(str, strlen(str));   // correct length
    cout << endl;

    cout << "Integer (<<): " << num << endl;
    cout << "Float (<<): " << f << endl;

    // ----- Using Manipulators -----
    cout << "\n--- Using Manipulators ---\n";

    cout << "Using endl" << endl;

    cout << "Using setw(10): " << setw(10) << num << endl;

    cout << "Using setprecision(4): " << setprecision(4) << f << endl;

    cout << "Using fixed + setprecision(2): "
         << fixed << setprecision(2) << f << endl;

    cout << "Using showpos: " << showpos << num << endl;

    return 0;
}