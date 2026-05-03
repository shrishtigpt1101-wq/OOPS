/*
WOOP in c++ with class act (account) with attributes acno, 
achodlers name, add, mob, amount . Write following operations;
1. Reading account info (Read, [AutoGen. acno if possible])
2. Printing account info (show in table format)
3. Deposit amount in account (after Deposit show updated amount also)
4. Withdraw amount from account (same operation as deposit)
5. Interest calculation (3.75 %, 1 month)
6. Update Account Info (except - acno,amount )
*/

#include <iostream>
using namespace std;

class Account {
    int acno;
    string name;
    string address;
    string mobile;
    float balance;

public:
    // Read account info
    void read() {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Mobile: ";
        cin >> mobile;
        cout << "Enter Initial Deposit: ";
        cin >> balance;
    }

    // Show account info
    void show() {
        cout << acno << "\t" << name << "\t" << address
             << "\t" << mobile << "\t" << balance << endl;
    }

    // Deposit money
    void deposit(float amt) {
        balance += amt;
        cout << "Deposit Successful. Updated Balance: " << balance << endl;
    }

    // Withdraw money
    void withdraw(float amt) {
        if (amt > balance)
            cout << "Insufficient Balance!\n";
        else {
            balance -= amt;
            cout << "Withdrawal Successful. Updated Balance: " << balance << endl;
        }
    }

    // Calculate interest (3.75% for 1 month)
    void interest() {
        float i = balance * 3.75 / 100;
        cout << "Interest for 1 month: " << i << endl;
    }

    // Update account info (except acno and balance)
    void update() {
        cout << "Update Name: ";
        cin >> name;
        cout << "Update Address: ";
        cin >> address;
        cout << "Update Mobile: ";
        cin >> mobile;
    }

    // Getter for account number
    int getAcno() {
        return acno;
    }
};

int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    Account accounts[100];  // Array to store multiple accounts

    // Read info for all accounts
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for account " << i+1 << " ---\n";
        accounts[i].read();
    }

    int choice = 0, acno, index;

    while (choice != 6) {   // loop until user chooses Exit
        cout << "\n----- MENU -----\n";
        cout << "1. Show Account Info\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Calculate Interest\n";
        cout << "5. Update Account Info\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) break; // Exit menu

        cout << "Enter Account Number: ";
        cin >> acno;

        // Find account index
        index = -1;
        for (int i = 0; i < n; i++) {
            if (accounts[i].getAcno() == acno) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Account not found!\n";
            continue; // go back to menu
        }

        switch(choice) {
            case 1:
                cout << "ACNO\tNAME\tADDR\tMOB\tBALANCE\n";
                accounts[index].show();
                break;
            case 2: {
                float depAmt;
                cout << "Enter amount to deposit: ";
                cin >> depAmt;
                accounts[index].deposit(depAmt);
                break;
            }
            case 3: {
                float withAmt;
                cout << "Enter amount to withdraw: ";
                cin >> withAmt;
                accounts[index].withdraw(withAmt);
                break;
            }
            case 4:
                accounts[index].interest();
                break;
            case 5:
                accounts[index].update();
                break;
            default:
                cout << "Invalid choice!\n";
        }
    }

    cout << "\nExiting program. Final account details:\n";
    cout << "ACNO\tNAME\tADDR\tMOB\tBALANCE\n";
    for (int i = 0; i < n; i++)
        accounts[i].show();

    return 0;
}
