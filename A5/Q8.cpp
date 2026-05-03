/*
3/6. One Program each on (A) Friend Class, (B) Member of one Friend to
Another,(C) Inner Class, (D) Local Class.
*/


//(A) Friend Class
#include <iostream>
using namespace std;

class A {
    int x = 10;

    // Friend class declaration
    friend class B;
};

class B {
public:
    void show(A obj) {
        cout << "Value of x = " << obj.x << endl;
    }
};

int main() {
    A objA;
    B objB;
    objB.show(objA);
    return 0;
}



//(B) Member of one Friend to Another
#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
    int a = 50;
    friend void B::show(A);  // Only this function is friend
};

class B {
public:
    void show(A obj) {
        cout << "Value of a = " << obj.a << endl;
    }
};

int main() {
    A objA;
    B objB;
    objB.show(objA);
    return 0;
}


//(C) Inner Class
#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void show() {
            cout << "This is Inner Class" << endl;
        }
    };
};

int main() {
    Outer::Inner obj;
    obj.show();
    return 0;
}



//(D) Local Class
#include <iostream>
using namespace std;

void display() {
    class Local {
    public:
        void show() {
            cout << "This is Local Class" << endl;
        }
    };

    Local obj;
    obj.show();
}

int main() {
    display();
    return 0;
}
