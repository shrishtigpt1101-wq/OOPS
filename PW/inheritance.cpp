#include<iostream>
using namespace std;

class vehicle
{
    public:
        int tyresize;
        int enginesize;
        int light;
        string companyname;

        vehicle() // constructor
        {
            cout<<"vehicle ka constructor called"<<endl;
        }

        void show_companyname()
        {
            cout<<"company name is: "<<companyname<<endl;
        }

};

class car : public vehicle // car inherits from vehicle
{   // car of vehicle
    public:
        int stearingsize;
};

class bike : public vehicle // bike inherits from vehicle   // derived class , child class
{   // child of vehicle
    public:
        int handlesize;
        
        bike()
        {
            cout<<"bike ka constructor called"<<endl;
        }
};

int main() {
    bike honda;

    honda.tyresize = 10;
    honda.enginesize = 1000;
    honda.handlesize = 5;
    honda.companyname = "honda";

    cout<<"Tyresize of honda bike is: "<<honda.tyresize<<endl;

    honda.show_companyname(); // member function of base class called by derived class object

}
