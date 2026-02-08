#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int id;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        id = -1;
        cout << "Default constructor called\n";
    }

    // Constructor with name only
    Student(string n) {
        name = n;
        age = 0;
        id = -1;
        cout << "Constructor with name called\n";
    }

    // Constructor with name and age
    Student(string n, int a) {
        name = n;
        age = a;
        id = -1;
        cout << "Constructor with name & age called\n";
    }

    // Constructor with all parameters
    Student(string n, int a, int i) {
        name = n;
        age = a;
        id = i;
        cout << "Constructor with all parameters called\n";
    }

    // Display function
    void display() {
        cout << "Name: " << name 
             << ", Age: " << age 
             << ", ID: " << id << endl;
    }
};

int main() {
    Student s1;                   // Calls default constructor
    Student s2("Alice");          // Calls constructor with name
    Student s3("Bob", 20);        // Calls constructor with name & age
    Student s4("Charlie", 22, 101); // Calls constructor with all parameters

    cout << "\nStudent Details:\n";
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}
