#include<iostream>
using namespace std;

class bike{
    public:
    int tyresize = 17;

    bike()   //default constructor
    {
        //tyresize=17;
        cout<<"bike tyresize is: "<<tyresize<<endl;
    }
};

int main()
{
    bike tvs;   //object creation  // constructor ko call jayegi
    bike yamaha; // constructor call
    bike hero; // constructor call
}