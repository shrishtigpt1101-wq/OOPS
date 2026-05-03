/* Implement H.In. over
b. Shape >- Rectangle , Triangle, Circle, Square class ( Calculate Area also) */

#include <iostream>
using namespace std;

class Shape {
public:
    float a,b;
};

class Rectangle : public Shape {
public:
    void getData() {
        cout<<"Enter length and breadth of Rectangle: ";
        cin>>a>>b;
    }
    void area() {
        cout<<"Area of Rectangle = "<<a*b<<endl;
    }
};

class Triangle : public Shape {
public:
    void getData() {
        cout<<"Enter base and height of Triangle: ";
        cin>>a>>b;
    }
    void area() {
        cout<<"Area of Triangle = "<<0.5*a*b<<endl;
    }
};

class Circle : public Shape {
public:
    void getData() {
        cout<<"Enter radius of Circle: ";
        cin>>a;
    }
    void area() {
        cout<<"Area of Circle = "<<3.14*a*a<<endl;
    }
};

class Square : public Shape {
public:
    void getData() {
        cout<<"Enter side of Square: ";
        cin>>a;
    }
    void area() {
        cout<<"Area of Square = "<<a*a<<endl;
    }
};

int main() {

    Rectangle r;
    Triangle t;
    Circle c;
    Square s;

    r.getData();
    r.area();

    t.getData();
    t.area();

    c.getData();
    c.area();

    s.getData();
    s.area();

    return 0;
}