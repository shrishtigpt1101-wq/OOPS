#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;   // private data

public:
    // function to set values
    void setValues(float l, float w) {
        length = l;
        width = w;
    }

    // function to calculate area
    float area() {
        return length * width;
    }

    // function to calculate perimeter
    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;
    float l, w;

    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter width of rectangle: ";
    cin >> w;

    r.setValues(l, w);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
