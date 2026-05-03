/* WOOP in C++ to Read and Print Record of 5 Customers. */

#include <iostream>
using namespace std;

class Customer
{
private:
    int Id;
    string name;
    float balance;

public:

    void read()
    {
        cout << "Enter Customer ID: ";
        cin >> Id;

        cout << "Enter Customer Name: ";
        cin >> name;

        cout << "Enter Account Balance: ";
        cin >> balance;
    }

    void show()
    {
        cout << "\nCustomer ID: " << Id;
        cout << "\nCustomer Name: " << name;
        cout << "\nAccount Balance: " << balance << endl;
    }
};

int main()
{
    Customer c[5];  

    cout << "Enter details of 5 customers\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nCustomer " << i + 1 << ":\n";
        c[i].read();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\nCustomer " << i + 1 << " Details:";
        c[i].show();
    }

    return 0;
}
