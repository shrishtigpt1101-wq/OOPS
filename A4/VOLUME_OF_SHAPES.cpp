/*
WOOP for Volume of (Cube, Cuboid, Cylinder , Sphere) 
*/

#include <iostream>
using namespace std;

class figure
{
public:
    int volume(int a);                 // cube
    int volume(int l, int b, int h);   // cuboid
    float volume(float r, float h);    // cylinder
    float volume(float r);             // sphere
};

// Cube
int figure::volume(int a)
{
    return a * a * a;
}

// Cuboid
int figure::volume(int l, int b, int h)
{
    return l * b * h;
}

// Cylinder
float figure::volume(float r, float h)
{
    return 3.14 * r * r * h;
}

// Sphere
float figure::volume(float r)
{
    return (4.0 / 3) * 3.14 * r * r * r;
}

int main()
{
    figure f;
    int choice;

    cout << "1. Cube\n";
    cout << "2. Cuboid\n";
    cout << "3. Cylinder\n";
    cout << "4. Sphere\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int a;
        cout << "Enter side: ";
        cin >> a;
        cout << "Volume of cube: " << f.volume(a);
        break;
    }

    case 2:
    {
        int l, b, h;
        cout << "Enter l b h: ";
        cin >> l >> b >> h;
        cout << "Volume of cuboid: " << f.volume(l, b, h);
        break;
    }

    case 3:
    {
        float r, h;
        cout << "Enter radius and height: ";
        cin >> r >> h;
        cout << "Volume of cylinder: " << f.volume(r, h);
        break;
    }

    case 4:
    {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Volume of sphere: " << f.volume(r);
        break;
    }

    default:
        cout << "Invalid choice!";
    }

    return 0;
}
