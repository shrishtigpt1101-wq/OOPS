/* WOOP on String class for overloading ==, >>, << operator */

#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    char str[50];

    // == operator
    bool operator==(String s) {
        return strcmp(str, s.str) == 0;
    }

    // >> operator
    friend istream& operator>>(istream &in, String &s) {
        in >> s.str;
        return in;
    }

    // << operator
    friend ostream& operator<<(ostream &out, String s) {
        out << s.str;
        return out;
    }
};

int main() {
    String s1, s2;

    cout<<"Enter first string: ";
    cin>>s1;

    cout<<"Enter second string: ";
    cin>>s2;

    cout<<"First String: "<<s1<<endl;
    cout<<"Second String: "<<s2<<endl;

    if(s1==s2)
        cout<<"Strings are equal";
    else
        cout<<"Strings are not equal";

    return 0;
}