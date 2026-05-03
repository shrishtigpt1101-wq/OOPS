/*Write of program over Vector class for overloading *, >>, << operator on the class.*/

#include <iostream>
using namespace std;

class Vector {
public:
    int x, y;

    // * operator
    Vector operator*(Vector v) {
        Vector t;
        t.x = x * v.x;
        t.y = y * v.y;
        return t;
    }

    // >> operator
    friend istream& operator>>(istream &in, Vector &v) {
        in >> v.x >> v.y;
        return in;
    }

    // << operator
    friend ostream& operator<<(ostream &out, Vector v) {
        out << "(" << v.x << "," << v.y << ")";
        return out;
    }
};

int main() {
    Vector v1, v2, v3;

    cout<<"Enter first vector: ";
    cin>>v1;

    cout<<"Enter second vector: ";
    cin>>v2;

    v3 = v1 * v2;

    cout<<"Vector 1 = "<<v1<<endl;
    cout<<"Vector 2 = "<<v2<<endl;
    cout<<"Result = "<<v3<<endl;

    return 0;
}