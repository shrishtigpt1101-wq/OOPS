/* Overload Unary (~)(M) and Binary (+)(F) and (==)(M) over String Class */

#include <iostream>
#include <string.h>
using namespace std;

class String {
    char str[100];

public:
    String() {
        strcpy(str,"");
    }

    String(char s[]) {
        strcpy(str,s);
    }

    // Unary ~ (Member) -> convert to uppercase
    void operator ~() {
        for(int i=0; str[i]!='\0'; i++) {
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
        }
    }

    // Binary + (Friend) -> concatenate strings
    friend String operator +(String a, String b) {
        String temp;
        strcpy(temp.str,a.str);
        strcat(temp.str,b.str);
        return temp;
    }

    // Binary == (Member)
    bool operator ==(String s) {
        if(strcmp(str,s.str)==0)
            return true;
        else
            return false;
    }

    void display() {
        cout<<str<<endl;
    }
};

int main() {

    String s1("hello "), s2("world"), s3;

    cout<<"String 1: ";
    s1.display();

    cout<<"String 2: ";
    s2.display();

    // Binary +
    s3 = s1 + s2;
    cout<<"After Concatenation: ";
    s3.display();

    // Unary ~
    ~s3;
    cout<<"After Unary ~ (Uppercase): ";
    s3.display();

    // Binary ==
    if(s1 == s2)
        cout<<"Strings are Equal"<<endl;
    else
        cout<<"Strings are Not Equal"<<endl;

    return 0;
}