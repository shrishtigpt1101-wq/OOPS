#include<iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum of two integers: " << a + b << endl;
}

void add(double a, double b) {
    cout << "Sum of two doubles: " << a + b << endl;
}

int main() {
    add(5, 10);          // Calls the first add function
    add(5.5, 10.2);     // Calls the second add function

    return 0;
}