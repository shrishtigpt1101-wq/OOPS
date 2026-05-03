/*
WAP in C++ to insurance to employee of company as per following rules;
 1. F 25 > 10000
 2. M 30 > 10000
 3. F 18 > 5000
 4. Rest no ins
*/

#include <iostream>
using namespace std;

class COMPANY
{
private:
    char gender;
    int age;
public:
    void getData()
    {
        cout << "Enter gender (M/F): ";
        cin >> gender;
        cout << "Enter age: ";
        cin >> age;
    }
    void cal_Insurance()
    {
        if ((gender == 'F' || gender == 'f') && age >= 25)
            cout << "Insurance Amount = 10000";
        else if ((gender == 'M' || gender == 'm') && age >= 30)
            cout << "Insurance Amount = 10000";
        else if ((gender == 'F' || gender == 'f') && age >= 18)
            cout << "Insurance Amount = 5000";
        else
            cout << "No Insurance";
    }
};
int main()
{   COMPANY emp;
    emp.getData();
    emp.cal_Insurance();
    return 0;
}
