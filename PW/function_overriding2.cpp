#include<iostream>
using namespace std;

class vehicle
{
    public:     
        int vehicle_ka_public;
        int wheels;
        string companyName;

        void show()
        {
            cout << " vehicle ka show \n";
        }
};

class Bike : public vehicle
{
    public:
    int b_ka_public;
        int handlesize;

        void show()
        {
            cout << "Bike ka show \n";
        }
};

int main() 
{    // comple ka point of view hai - vehicle type ka hai
    // runtime ka pioint of view hai - bike ka address hai

   Bike b;
   vehicle *a;
    a=&b;
    a->show();   // from A
}
