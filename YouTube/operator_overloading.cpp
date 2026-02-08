#include<iostream>
using namespace std;

class complex
{
public:
    int real;
    int img;

    // default constructor
    complex() 
    {
        real = 0;
        img = 0;
    }

    // parameterized constructor
    complex(int x, int y)
    {
        real = x;
        img = y;
    }

    // operator overloading for +
    complex operator+(complex &c)
    {
        complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex c1(1, 2);
    complex c2(3, 4);

    complex c3 = c1 + c2;   // uses overloaded operator
    c3.display();

    return 0;
}
