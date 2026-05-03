// WOOP over Student class for storing record and printing result of student using IOS function and Manipulators.

#include<iostream>
#include<iomanip>   // for manipulators
#include<cstring>   // for strlen()
using namespace std;

class Student
{
    int roll;
    char name[50];
    float marks1, marks2, marks3, total, percentage;

public:
    // Function to take input
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cin.ignore(1000, '\n');  // clear buffer

        cout << "Enter Name: ";
        cin.getline(name, 50);   // getline()

        cout << "Enter Marks (3 subjects): ";
        cin >> marks1 >> marks2 >> marks3;

        total = marks1 + marks2 + marks3;
        percentage = total / 3;
    }

    // Function to display result
    void showData()
    {
        cout << "\n--- Student Result ---\n";

        cout << "Roll No: " << roll << endl;

        cout << "Name: ";
        cout.write(name, strlen(name));   // write()
        cout << endl;

        cout << "Marks: " 
             << marks1 << ", " 
             << marks2 << ", " 
             << marks3 << endl;

        cout << "Total: " << total << endl;

        // Using manipulators
        cout << "Percentage: "
             << fixed << setprecision(2) << percentage << "%" << endl;

        cout << "Formatted Roll No: "
             << setw(5) << showpos << roll << endl;
    }
};

int main()
{
    Student s;

    s.getData();   // input
    s.showData();  // output

    return 0;
}
