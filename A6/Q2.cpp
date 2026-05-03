// WOOP using all Constructors over Number class.

#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number() { x = 0; }                 // Default
    Number(int a) { x = a; }            // Parameterized
    Number(Number &n) { x = n.x; }      // Copy constructor

    void show() {
        cout << "Number = " << x << endl;
    }
};

int main() {
    Number n1;
    Number n2(10);
    Number n3(n2);
    n1.show(); n2.show(); n3.show();
    return 0;
}
