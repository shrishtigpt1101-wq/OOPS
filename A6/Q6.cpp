// WOOP over String class to implement Dynamic Constructor.

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char *s;
    int ln;
public:
    // Dynamic Parameterized Constructor
    MyString(char *str) {
        ln = strlen(str);
        s = new char[ln + 1];
        strcpy(s, str);  // copy string content
    }
    // Copy Constructor (deep copy)
    MyString(MyString &z) {
        ln = z.ln;
        s = new char[ln + 1];
        strcpy(s, z.s);  // copy content
        cout << "Copy Constructor Called\n";
    }
    void show() {
        cout << s << endl;
    }
    // Destructor
    ~MyString() {
        delete[]s;
    }
};

int main() {
    MyString s1("HELLO");   // dynamic constructor
    MyString s2(s1);        // copy constructor

    s1.show();
    s2.show();

    return 0;
}