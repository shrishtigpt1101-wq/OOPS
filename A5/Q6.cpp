// WOOP on Class String to concatenate two Strings (using both Member/ Friend)

#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;
public:
    // Function to input string
    void getString() {
        cout << "Enter string: ";
        cin >> str;
    }

    // MEMBER FUNCTION to concatenate
    void concatMember(MyString s2) {
        cout << "\nConcatenation using MEMBER function: "
             << str + s2.str << endl;
    }

    // FRIEND FUNCTION declaration
    friend void concatFriend(MyString s1, MyString s2)
    {
        cout << "Concatenation using FRIEND function: "
             << s1.str + s2.str << endl;
    }
};
int main() {
    MyString s1, s2;

    s1.getString();
    s2.getString();

    // Using member function
    s1.concatMember(s2);

    // Using friend function
    concatFriend(s1, s2);

    return 0;
}
