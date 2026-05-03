/* Implement H.In. over
c. Vehicle -> 2Wh , 4 Wh class */

#include <iostream>
using namespace std;

class Vehicle {
public:
    void info() {
        cout<<"This is a Vehicle"<<endl;
    }
};

class TwoWh : public Vehicle {
public:
    void show() {
        cout<<"Two Wheeler Vehicle"<<endl;
    }
};

class FourWh : public Vehicle {
public:
    void show() {
        cout<<"Four Wheeler Vehicle"<<endl;
    }
};

int main() {

    TwoWh t;
    FourWh f;

    cout<<"Two Wheeler Information:"<<endl;
    t.info();
    t.show();

    cout<<endl;

    cout<<"Four Wheeler Information:"<<endl;
    f.info();
    f.show();

    return 0;
}