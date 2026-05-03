/*
WOOP in C++ to store and print record of a student
*/

#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    char name[50];
    int study;  

public:
    void getdata()
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Class: ";
        cin >> study;
    }

    void display()
    {
        cout << "\nRoll No : " << roll_no;
        cout << "\nName    : " << name;
        cout << "\nClass   : " << study << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[50]; 

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 ;
        s[i].getdata();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}
