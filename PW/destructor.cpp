#include<iostream>
using namespace std;

class bike {
public:
    int tyresize;
    int enginesize;

    // Constructor with tyresize + enginesize
    bike(int tyresize1, int enginesize1) {
        tyresize = tyresize1;
        enginesize = enginesize1;
        cout << "bike tyresize is: " << tyresize << endl;
        cout << "bike enginesize is: " << enginesize << endl;
    }

    ~bike(){
        cout<<"Destructor called"<<endl;
    }

};

int main() {
    bike suzuki(20,150); // calls constructor with 2 parameters
    bike yamaha(19, 130); // calls constructor with 2 parameters

    cout << suzuki.tyresize << endl;    // 20
    cout << suzuki.enginesize << endl;  // 150

    cout << yamaha.tyresize << endl;    // 19
    cout << yamaha.enginesize << endl;  // 130

}
