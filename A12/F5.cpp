/* WOOP for storing n objects of STUDENT / ACCOUNT / BOOK / CUSTOMER class in file after retrival print it. 
(read, write function,seekg, seekp, tellg, tellp ) */

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class Account {
    int acno;
    char name[30];
    float balance;

public:
    void getData() {
        cout << "Enter Account No: ";
        cin >> acno;

        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 30);

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void showData() {
        cout << setw(10) << acno
             << setw(15) << name
             << setw(10) << balance << endl;
    }
};

int main() {
    Account a;
    fstream file;
    int n;

    // 🔹 Open file for writing (append mode)
    file.open("account.dat", ios::out | ios::binary | ios::app);

    if(!file) {
        cout << "Error opening file for writing!";
        return 0;
    }

    cout << "Enter number of records: ";
    cin >> n;

    // 🔹 Writing records
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for record " << i+1 << endl;
        a.getData();

        cout << "Writing at position: " << file.tellp() << endl;
        file.write((char*)&a, sizeof(a));
    }

    file.close();

    // 🔹 Open file for reading
    file.open("account.dat", ios::in | ios::binary);

    if(!file) {
        cout << "Error opening file for reading!";
        return 0;
    }

    cout << "\n\nStored Records:\n";
    cout << setw(10) << "AccNo"
         << setw(15) << "Name"
         << setw(10) << "Balance" << endl;

    // 🔹 Reading all records
    while(file.read((char*)&a, sizeof(a))) {
        cout << "Reading at position: " << file.tellg() << endl;
        a.showData();
    }

    // 🔹 Random access using seekg()
    int rec;
    cout << "\nEnter record number to search: ";
    cin >> rec;

    file.clear(); // clear EOF flag
    file.seekg((rec - 1) * sizeof(a), ios::beg);

    if(file.read((char*)&a, sizeof(a))) {
        cout << "\nRecord Found:\n";
        a.showData();
    } else {
        cout << "\nRecord not found!";
    }

    file.close();

    return 0;
}