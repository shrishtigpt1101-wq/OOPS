#include <iostream>
using namespace std;

class Circle {
private:
    float radius;   // private data

public:
    // function to set radius
    void setRadius(float r) {
        radius = r;
    }

    // function to calculate area
    float area() {
        return 3.14 * radius * radius;
    }

    // function to calculate circumference
    float circumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c;
    float r;

    cout << "Enter radius of circle: ";
    cin >> r;

    c.setRadius(r);

    cout << "Area = " << c.area() << endl;
    cout << "Circumference = " << c.circumference() << endl;

    return 0;
}
