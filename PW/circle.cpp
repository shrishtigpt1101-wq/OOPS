#include<iostream>
using namespace std;

class Circle {
    public:
    float radius;
    float area;
    float circumference;
    float pi = 3.14;

    void calculateArea() {
        area = pi * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    void calculateCircumference() {
        circumference = 2 * pi * radius;
        cout << "Circumference of Circle: " << circumference << endl;
    }

};

int main()
{
    Circle circle;

    cout << "Enter radius of circle: ";
    cin >> circle.radius;

    circle.calculateArea();
    circle.calculateCircumference();

    return 0;
}
