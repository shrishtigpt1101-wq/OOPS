/* Overload Unary (++(F), -(M)) and Binary (*(F), !=(M)) over Integer Class */

#include <iostream>
using namespace std;

class Integer {
    int x;

public:
    Integer(int a = 0) {
        x = a;
    }

    // Friend Unary ++
    friend Integer operator ++(Integer &obj) {
        obj.x++;
        return obj;
    }

    // Member Unary -
    Integer operator -() {
        return Integer(-x);
    }

    // Friend Binary *
    friend Integer operator *(Integer a, Integer b) {
        return Integer(a.x * b.x);
    }

    // Member Binary !=
    bool operator !=(Integer obj) {
        return (x != obj.x);
    }

    void display() {
        cout << x << endl;
    }
};

int main() {

    Integer a(5), b(3), c;

    cout<<"Value of a: ";
    a.display();

    cout<<"Value of b: ";
    b.display();

    // Unary ++ (Friend)
    ++a;
    cout<<"After ++a: ";
    a.display();

    // Unary - (Member)
    c = -a;
    cout<<"After Unary - on a: ";
    c.display();

    // Binary * (Friend)
    c = a * b;
    cout<<"Multiplication (a*b): ";
    c.display();

    // Binary != (Member)
    if(a != b)
        cout<<"a and b are not equal"<<endl;
    else
        cout<<"a and b are equal"<<endl;

    return 0;
}