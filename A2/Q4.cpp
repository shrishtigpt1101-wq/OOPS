/*
WOOP in C++ with class Customer for storing and showing records of two customers
*/
#include <iostream>
using namespace std;

class Customer
{
private:
    int Id;
    string name;
    float balance;

public:
    
    void getData()
    {
        cout << "Enter Customer ID: ";
        cin >> Id;

        cout << "Enter Customer Name: ";
        cin >> name;

        cout << "Enter Account Balance: ";
        cin >> balance;
    }

    void showData()
    {
        cout << "\nCustomer ID: " << Id;
        cout << "\nCustomer Name: " << name;
        cout << "\nAccount Balance: " << balance << endl;
    }
};

int main()
{
    Customer c1, c2;   

    cout << "Enter details of Customer 1\n";
    c1.getData();

    cout << "\nEnter details of Customer 2\n";
    c2.getData();

    cout << "\nCustomer Records\n";
    cout << "\nCustomer 1 :";
    c1.showData();

    cout << "\nCustomer 2 :";
    c2.showData();

    return 0;
}
