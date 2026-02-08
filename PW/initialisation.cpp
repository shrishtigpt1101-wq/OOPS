#include<iostream>
using namespace std;

class bike {
public:
    int tyresize;
    int enginesize;

    /* 
        bike(int tyresize1, int enginesize1) {
        tyresize = tyresize1;
        enginesize = enginesize1;
        cout << "bike tyresize is: " << tyresize << endl;
        cout << "bike enginesize is: " << enginesize << endl;
    }

    */

    bike (int ts , int es) : tyresize(ts), enginesize(es) {
        cout << "bike tyresize is: " << tyresize << endl;
        cout << "bike enginesize is: " << enginesize << endl;
    }

};

int main() {
    bike suzuki(20,150); // calls constructor with 2 parameters
 
    cout << suzuki.tyresize << endl;    // 20
    cout << suzuki.enginesize << endl;  // 150

}
