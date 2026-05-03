// Overload (<<) and (>>) operator over Student Class.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Overload >> operator (input)
    friend void operator>>(istream &in, Student &s) {
        cout << "Enter Roll Number: ";
        in >> s.roll;
        cout << "Enter Name: ";
        in >> s.name;
    }

    // Overload << operator (output)
    friend void operator<<(ostream &out, Student s) {
        out << "Roll Number: " << s.roll << endl;
        out << "Name: " << s.name << endl;
    }
};

int main() {
    Student s;

    cin >> s;   // Calls overloaded >>
    cout << "\nStudent Details:\n";
    cout << s;  // Calls overloaded <<

    return 0;
}