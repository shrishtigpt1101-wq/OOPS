/*
WOOP over Shape, Circle , Triangle, Rectangle (Derived classes). Implement Rumtime Polymorphism
over Area() function.
*/

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void Area()
    {
        cout << "Area not defined\n";
    }
};

class Circle : public Shape
{
    float r;
public:
    void get()
    {
        cout << "Enter radius: ";
        cin >> r;
    }

    void Area()
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Triangle : public Shape
{
    float b, h;
public:
    void get()
    {
        cout << "Enter base and height: ";
        cin >> b >> h;
    }

    void Area()
    {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

class Rectangle : public Shape
{
    float l, w;
public:
    void get()
    {
        cout << "Enter length and width: ";
        cin >> l >> w;
    }

    void Area()
    {
        cout << "Area of Rectangle = " << l * w << endl;
    }
};

int main()
{
    Shape *ptr;
    Circle c;
    Triangle t;
    Rectangle r;

    // Circle
    ptr = &c;
    c.get();
    ptr->Area();

    // Triangle
    ptr = &t;
    t.get();
    ptr->Area();

    // Rectangle
    ptr = &r;
    r.get();
    ptr->Area();

    return 0;
}