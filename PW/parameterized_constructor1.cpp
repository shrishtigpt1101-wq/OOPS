#include<iostream>
using namespace std;

class bike {
public:
    int tyresize;
    int enginesize;

    // Constructor with only tyresize
    bike(int tyresize1) {
        tyresize = tyresize1;
        enginesize = 0; // default value
        cout << "bike tyresize is: " << tyresize << endl;

    }

    // Constructor with tyresize + enginesize
    bike(int tyresize1, int enginesize1) {
        tyresize = tyresize1;
        enginesize = enginesize1;
        cout << "bike tyresize is: " << tyresize << endl;
        cout << "bike enginesize is: " << enginesize << endl;
        cout << endl; // put inside constructor
    }
};

int main() {
    bike tvs(17);     // calls constructor with 1 parameter
    bike yamaha(19);  // calls constructor with 1 parameter
    bike hero(21);    // calls constructor with 1 parameter

    cout << tvs.tyresize << endl;    // 17
    cout << yamaha.tyresize << endl; // 19
    cout << hero.tyresize << endl;   // 21

    cout<<endl;

    bike suzuki(20,150); // calls constructor with 2 parameters
    cout << suzuki.tyresize << endl;    // 20
    cout << suzuki.enginesize << endl;  // 150
}
