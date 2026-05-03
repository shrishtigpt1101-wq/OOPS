// WOOP to hold single object using object pointer.

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
        cout << "\nName: " << name;
    }
};

int main()
{
    Student *ptr;   // object pointer

    ptr = new Student;   // dynamic object creation

    ptr->getData();      // access using pointer
    ptr->showData();

    delete ptr;          // free memory

    return 0;
}