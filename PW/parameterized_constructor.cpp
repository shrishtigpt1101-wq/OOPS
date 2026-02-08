#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        // Creating a parameterized constructor
        Complex(int x,int y) 
        {
            a = x;
            b = y;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    // Implicit call
    Complex c1(4,5);
    c1.printNumber();

    // Explicit call
    Complex c2 = Complex(6,7);
    c2.printNumber();

    Complex c3(8,9);
    c3.printNumber();

    return 0;
}
