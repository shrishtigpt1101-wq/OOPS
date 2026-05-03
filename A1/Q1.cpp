// Read day of week in no. and print cor day

#include <iostream>
using namespace std;
class DayOfWeek
{
private:
    int day;
public:
    void getdata()
    {
        cout << "Enter day number (1-7): ";
        cin >> day;
    }
    void printDay()
    {
        switch (day)
        {   
            case 1: cout << "Monday"; break;
            case 2: cout << "Tuesday"; break;
            case 3: cout << "Wednesday"; break;
            case 4: cout << "Thursday"; break;
            case 5: cout << "Friday"; break;
            case 6: cout << "Saturday"; break;
            case 7: cout << "Sunday"; break;
            default: cout << "Invalid day number!";
        }
    }
};
int main()
{   DayOfWeek d;
    d.getdata();
    d.printDay();
    return 0;
}