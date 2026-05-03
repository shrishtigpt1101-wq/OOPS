/* Implement Hierarchical Inheritance over
a. Employee -> Manager –> Worker class (Calculate Salary also) */

#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    float salary;
public:
    void getData() {
        cout<<"Enter ID and Salary: ";
        cin>>id>>salary;
    }
};

class Manager : public Employee {
public:
    void display() {
        cout<<"Manager ID: "<<id<<endl;
        cout<<"Manager Salary: "<<salary+5000<<endl;
    }
};

class Worker : public Employee {
public:
    void display() {
        cout<<"Worker ID: "<<id<<endl;
        cout<<"Worker Salary: "<<salary+2000<<endl;
    }
};

int main() {
    Manager m;
    Worker w;

    m.getData();
    m.display();

    w.getData();
    w.display();
}