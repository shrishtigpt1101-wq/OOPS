// WOOP using all Constructors over String Class and also perform reversal of String.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class MyString {
    string s;
public:
    MyString() { s = ""; }                     // Default
    MyString(string str) { s = str; }          // Parameterized
    MyString(MyString &m) { s = m.s; }         // Copy

    void reverse() {
        cout << "Reversed: ";
        std::reverse(s.begin(), s.end());
        cout << s << endl;
    }
    /*
    void showReverse() {
        cout << "Reversed: ";
        for (int i = s.length() - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << endl;
    } 
    */
};

int main() {
    MyString s0; // Default constructor
    MyString s1("HELLO");
    MyString s2(s1);
    s0.reverse();
    s1.reverse();
    s2.reverse();
    return 0;
}
