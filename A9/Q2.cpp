/*Wite a program hybrid Inheritance Over Student - > Test ->Result and Sports - > Result class.*/

#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

class Test : public Student {
protected:
    int m1, m2;
public:
    void getMarks() {
        cout << "Enter marks in two subjects: ";
        cin >> m1 >> m2;
    }
};

class Sports {
protected:
    int score;
public:
    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Test, public Sports {
private:
    int total;
public:
    void display() {
        total = m1 + m2 + score;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result obj;
    obj.getRoll();
    obj.getMarks();
    obj.getScore();
    obj.display();
    return 0;
}