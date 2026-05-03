/* 
WOOP to use this pointer to return self object using Person Class. 
(DM name same as formal para, and returning self object)
*/

#include <iostream>
using namespace std;

class Person
{
    char name[20];

public:
    // DM name same as parameter
    Person& setName(char name[])
    {
        // using this pointer
        strcpy(this->name, name);
        return *this;   // return same object
    }

    void show()
    {
        cout << "Name: " << name;
    }
};

int main()
{
    Person p;

    p.setName("Shrishti").show();   // chaining

    return 0;
}