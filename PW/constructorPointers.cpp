#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating object using pointer
    Student *s1 = new Student("Alice", 20);  // calls constructor
    Student *s2 = new Student("Bob", 22);

    // Access using -> operator
    s1->display();
    s2->display();

    // Free memory
    delete s1;
    delete s2;

    return 0;
}
