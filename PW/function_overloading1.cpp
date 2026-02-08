#include<iostream>
using namespace std;

class Print {
public:
    int tyresize;
    int enginesize;

    // Constructor with two parameters
    Print(int a, int b) : tyresize(a), enginesize(b) {
        cout << "Tyre size is " << tyresize << endl;
        cout << "Engine size is " << enginesize << endl;
    }

    // Constructor with one parameter
    Print(int a) : tyresize(a), enginesize(0) {
        cout << "Tyre size is " << tyresize << endl;
    }
};

int main() {
    Print b1(10, 150); // calls 2-parameter constructor
    Print b2(12);      // calls 1-parameter constructor
    return 0;
}
