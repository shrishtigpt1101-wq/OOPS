// WOOP to hold multiple object (n) using object pointer.

#include <iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }

    void showData()
    {
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *ptr;   // object pointer

    ptr = new Student[n];   // allocate memory for n objects

    // Input
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i+1 << endl;
        ptr[i].getData();   // OR (ptr+i)->getData();
    }

    // Output
    cout << "\n--- Student Details ---\n";
    for(int i = 0; i < n; i++)
    {
        ptr[i].showData();   // OR (ptr+i)->showData();
    }

    delete[] ptr;   // free memory

    return 0;
}