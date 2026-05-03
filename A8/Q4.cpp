/* WOOP for Multilevel Inheritance (protected / Private) over
 Student ->Test ->Result class. */

/*
Why protected used?

roll, m1, m2 are protected
✔ accessible in derived classes
❌ not accessible in main()

total is private
✔ used only inside Result
*/

#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int roll;   // protected

public:
    void setRoll(int r) {
        roll = r;
    }
};

// Derived class 1
class Test : public Student {
protected:
    int m1, m2;   // protected

public:
    void setMarks(int a, int b) {
        m1 = a;
        m2 = b;
    }
};

// Derived class 2
class Result : public Test {
private:
    int total;   // private

public:
    void calculate() {
        total = m1 + m2;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Total Marks: " << total;
    }
};

int main() {
    Result obj;

    obj.setRoll(101);
    obj.setMarks(75, 85);
    obj.calculate();
    obj.display();
    return 0;
}