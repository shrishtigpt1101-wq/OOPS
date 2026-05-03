// WOOP for creating multiple Object and destroy the same. Check sequence of creation and destruction.

#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called\n";
    }
    ~Test() {
        cout << "Destructor called\n";
    }
};

int main() {
    Test t1, t2, t3;
    return 0;
}
