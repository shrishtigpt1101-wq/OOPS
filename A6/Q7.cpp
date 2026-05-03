/* WOOP on extending Account Class (Array of Object) with any two constructors and Destructor functions
 with following operations;  storing  printing records for Array of object.*/

#include <iostream>
using namespace std;

class Account {
    int accNo;
    float bal;
public:
    Account() { accNo = 0; bal = 0; }
    Account(int a, float b) { accNo = a; bal = b; }
    void show() {
        cout << accNo << "  " << bal << endl;
    }
    ~Account() { }
};

int main() {
    Account a[2] = { Account(101,5000), Account(102,8000) };
    for (int i = 0; i < 2; i++)
        a[i].show();
    return 0;
}
