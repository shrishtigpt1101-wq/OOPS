/*
WOOP over Media (Base ) Book (Derived) Tape (Derived) for implementing Rumtime Polymorphism
over pure virtual function Display() function.
*/

#include <iostream>
using namespace std;

class Media
{
public:
    virtual void Display() = 0;   // pure virtual function
};

class Book : public Media
{
    char title[20];
    float price;

public:
    void get()
    {
        cout << "Enter Book Title and Price: ";
        cin >> title >> price;
    }

    void Display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Tape : public Media
{
    char title[20];
    float time;

public:
    void get()
    {
        cout << "Enter Tape Title and Time: ";
        cin >> title >> time;
    }

    void Display()
    {
        cout << "Tape Title: " << title << endl;
        cout << "Playing Time: " << time << endl;
    }
};

int main()
{
    Media *ptr;
    Book b;
    Tape t;

    // Book
    ptr = &b;
    b.get();
    ptr->Display();

    // Tape
    ptr = &t;
    t.get();
    ptr->Display();

    return 0;
}