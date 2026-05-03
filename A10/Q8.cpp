/* WOOP over Array class for overloading >>, <<, [] operator */

#include <iostream>
using namespace std;

class Array {
public:
    int a[5];

    // >> operator
    friend istream& operator>>(istream &in, Array &x) {
        for(int i=0;i<5;i++)
            in>>x.a[i];
        return in;
    }

    // << operator
    friend ostream& operator<<(ostream &out, Array x) {
        for(int i=0;i<5;i++)
            out<<x.a[i]<<" ";
        return out;
    }

    // [] operator
    int& operator[](int i) {
        return a[i];
    }
};

int main() {

    Array arr;

    cout<<"Enter 5 elements: ";
    cin>>arr;

    cout<<"Array elements: "<<arr<<endl;

    cout<<"Element at index 2 = "<<arr[2]<<endl;

    return 0;
}