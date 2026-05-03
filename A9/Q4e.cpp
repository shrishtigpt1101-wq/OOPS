/* Implement Hierarchical Inheritance over
   Person -> Student , Faculty class */

#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    void display() {
        cout<<"Student Name: "<<name<<endl;
    }
};

class Faculty : public Person {
public:
    void display() {
        cout<<"Faculty Name: "<<name<<endl;
    }
};

int main() {

    Student s;
    Faculty f;

    cout<<"Enter Student Name: ";
    cin>>s.name;

    cout<<"Enter Faculty Name: ";
    cin>>f.name;

    cout<<endl;

    s.display();
    f.display();

    return 0;
}