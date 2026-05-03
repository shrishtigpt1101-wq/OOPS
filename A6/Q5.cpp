// WOOP over Time class to implement concept of Constructor Overloading.

#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // 1. Default Constructor
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    // 2. Parameterized Constructor (hours, minutes, seconds)
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // 3. Copy Constructor
    Time(Time &t) {
        hours = t.hours;
        minutes = t.minutes;
        seconds = t.seconds;
        cout << "Copy Constructor Called\n";
    }

    // Display function
    void display() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    Time t1;             // Default constructor
    Time t2(2, 45, 30);  // Parameterized constructor
    Time t3(t2);          // Copy constructor

    cout << "t1: "; t1.display();
    cout << "t2: "; t2.display();
    cout << "t3: "; t3.display();

    return 0;
}