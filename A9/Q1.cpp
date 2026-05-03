/* WOOP over Alpha - Beta ->Gamma class for implementing multiple Inheritance. (Constructor of Derived class). */

#include <iostream>
using namespace std;

class Alpha {
public:
    Alpha() {
        cout << "Constructor of Alpha class" << endl;
    }

    ~Alpha() {
        cout << "Destructor of Alpha class" << endl;
    }
};

class Beta {
public:
    Beta() {
        cout << "Constructor of Beta class" << endl;
    }

    ~Beta() {
        cout << "Destructor of Beta class" << endl;
    }
};

class Gamma : public Alpha, public Beta {
public:
    Gamma() {
        cout << "Constructor of Gamma (Derived) class" << endl;
    }

    ~Gamma() {
        cout << "Destructor of Gamma (Derived) class" << endl;
    }
};

int main() {
    Gamma obj;
    return 0;
}