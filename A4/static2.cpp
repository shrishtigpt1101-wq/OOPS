/*
WOOP with student class with at least one or more
Static Data members and one or more Static Member Function 
and implement storage, Printing students records 
and also count no. of objects created of student class.
*/
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

    // Static data member
    static int count;

public:
    // Constructor
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
        count++;   // Increase count when object is created
    }

    // Function to display student record
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name   : " << name << endl;
        cout << "Marks  : " << marks << endl;
        cout << "---------------------" << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students Created: " << count << endl;
    }
};

// Initialize static data member
int Student::count = 0;

int main() {
    // Creating student objects
    Student s1(1, "Rahul", 85.5);
    Student s2(2, "Anita", 90.0);
    Student s3(3, "Aman", 78.5);

    // Printing student records
    s1.display();
    s2.display();
    s3.display();

    // Display total number of students
    Student::showCount(); // Calling static member function using class name

    return 0;
}


