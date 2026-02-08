#include<iostream>
using namespace std;

void print()
{
    /*
    Created each time the function is called.
    Destroyed when the function ends.
    Always reinitialized when function runs again.
    */

    int b=10;    // created fresh on each call
    cout<<b<<endl;
    b++;   // updated, but destroyed after function ends
    //b=b+1   //10 , 11 , 12
}   
// program ends here, b destroy ho jayega


void print1()
{

    /*
    Created only once for the function, and retains its value across calls.
    Initialized only once (first call).
    Persists until program ends.
    */

    static int a=10;  //static variable // created only once
    cout<<a<<endl;
    a++;  // updated and value retained
    //a=a+1   //10 , 11 , 12
}

int main() {

    print();
    print();
    print();

    cout<<endl;

    print1();
    print1();
    print1();

}
