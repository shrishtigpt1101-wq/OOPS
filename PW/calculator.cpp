#include <iostream>
using namespace std;

class Calculator {
public:
    int a;  //data members
    int b;

    void add() {    //data function
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero is not allowed!" << endl;
    }

    void multiply() {
        cout << "Multiplication: " << a * b << endl;
    }
};

int main() {
    Calculator calci;
    calci.a = 10;
    calci.b = 25;

    calci.add();
    calci.subtract();
    calci.multiply();
    calci.divide();

    return 0;
}
