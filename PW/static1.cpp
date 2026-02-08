#include<iostream>
using namespace std;

class bike {
public:
    int tyresize;
    int enginesize;
    static int  noOfBikes; // static variable declaration   // this belongs to class not to object

    // Constructor with tyresize + enginesize
    bike(int tyresize1, int enginesize1) {
        tyresize = tyresize1;
        enginesize = enginesize1;
        cout << "bike tyresize is: " << tyresize << endl;
        cout << "bike enginesize is: " << enginesize << endl;
    }

    static void increasenoOfBikes(int no) { // static function
        noOfBikes ++;
    }

};

int bike::noOfBikes=1; // static variable definition and initialization
    // direct call from the class 
    // no need to create object
    

int main() {


    bike suzuki(20,150); // calls constructor with 2 parameters
    bike bajaj(19, 130); // calls constructor with 2 parameters

    suzuki.increasenoOfBikes(1); // static function call using object

    cout<<"bike: "<<suzuki.noOfBikes<<endl; //2
    cout << suzuki.tyresize << endl;    // 20
    cout << suzuki.enginesize << endl;  // 150

    bajaj.increasenoOfBikes(1); // static function call using object

    cout<<"bike: "<<bajaj.noOfBikes<<endl; //3
    cout<<bajaj.tyresize<<endl;    // 19
    cout<<bajaj.enginesize<<endl;  // 130

    bike::increasenoOfBikes(1); // static function call using class name
    cout<<"bike: "<<bike::noOfBikes<<endl; //4

}
