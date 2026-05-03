/* Implement H.In. over
d. Bird -> FlyingBird, NonFlyingBird class */

#include <iostream>
using namespace std;

class Bird {
public:
    void eat() {
        cout<<"Birds eat food"<<endl;
    }
};

class FlyingBird : public Bird {
public:
    void fly() {
        cout<<"This bird can fly"<<endl;
    }
};

class NonFlyingBird : public Bird {
public:
    void walk() {
        cout<<"This bird cannot fly"<<endl;
    }
};

int main() {

    FlyingBird f;
    NonFlyingBird n;

    cout<<"Flying Bird Information:"<<endl;
    f.eat();
    f.fly();

    cout<<endl;

    cout<<"Non-Flying Bird Information:"<<endl;
    n.eat();
    n.walk();

    return 0;
}