/*
 WOOP for implementing CONST Object, CONST Member Function, CONST Arguments.

const object → object whose data cannot be modified
const member function → function that doesn’t modify object data
const arguments → function arguments that cannot be changed inside the function
*/

#include <iostream>
using namespace std;

class Calculator {
private:
    int num;

public:
    // Parameterized constructor
    Calculator(int n) {
        num = n;
    }

    // Const member function
    void display() const {
        cout << "Value: " << num << endl;
    }

    // Function with const argument
    int square(const int x) {
        // x = x + 1; // ❌ Not allowed, x is const
        return x * x;
    }
};

int main() {
    const Calculator calc(5); // Const object (only allow to call const member functions0

    calc.display();            // Allowed: display() is const
    // calc.square(5);         // ❌ Not allowed: square() is not const

    // Using non-const object for square()
    Calculator calc2(10);
    cout << "Square of 7: " << calc2.square(7) << endl;

    return 0;
}
