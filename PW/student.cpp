#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int id;

public:
    // setter methods
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setId(int i) {
        id = i;
    }

    // getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getId() {
        return id;
    }
};

int main() {
    Student s;
    string name;
    int age, id;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter student ID: ";
    cin >> id;

    // setting values
    s.setName(name);
    s.setAge(age);
    s.setId(id);

    // displaying values
    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "ID: " << s.getId() << endl;

    return 0;
}
