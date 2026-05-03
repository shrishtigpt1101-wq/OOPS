/* WOOP over Integer class for overloading pre --, post -- and logical && */

#include <iostream>
using namespace std;

class Integer {
public:
    int x;

    Integer(int a=0) {
        x = a;
    }

    // Pre --
    Integer operator--() {
        --x;
        return *this;
    }

    // Post --
    Integer operator--(int) {
        Integer temp = *this;
        x--;
        return temp;
    }

    // Logical &&
    bool operator&&(Integer b) {
        return (x && b.x);
    }

    void display() {
        cout<<x<<endl;
    }
};

int main() {

    Integer a(5), b(3);

    cout<<"Initial a = ";
    a.display();

    --a; // pre --
    cout<<"After pre -- : ";
    a.display();

    a--; // post --
    cout<<"After post -- : ";
    a.display();

    if(a && b)
        cout<<"Logical AND is true"<<endl;
    else
        cout<<"Logical AND is false"<<endl;

    return 0;
}