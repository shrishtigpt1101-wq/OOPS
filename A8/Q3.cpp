/* WOOP for Multilevel Inheritance (publicly) over
 Student -> Test -> Result class.  */

#include <iostream>
using namespace std;

// Base class
class Student {
public:
    int roll;

    void setRoll(int r) {
        roll = r;
    }
};

// Derived class 1
class Test : public Student {
public:
    int m1, m2;

    void setMarks(int a, int b) {
        m1 = a;
        m2 = b;
    }
};

// Derived class 2
class Result : public Test {
public:
    void display() {
        int total = m1 + m2;
        cout << "Roll No: " << roll << endl;
        cout << "Total Marks: " << total;
    }
};

int main() {
    Result obj;

    obj.setRoll(101);
    obj.setMarks(80, 90);
    obj.display();

    return 0;
}