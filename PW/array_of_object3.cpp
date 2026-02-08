#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int age;
    int noOfTestMatches;
    int averageScore;
};

int main()
{
    Cricketer cricketers[20]; // Array for 20 cricketers

    Cricketer virat;
    virat.name = "Virat Kohli";
    virat.age = 32;
    virat.noOfTestMatches = 95;
    virat.averageScore = 54;
    cricketers[0] = virat; // Assigning first cricketer
     
    cout << "Cricketer 1:- \n\nName:" << virat.name << endl;
    cout << "Age: " << virat.age << endl;
    cout << "Test Matches: " << virat.noOfTestMatches << endl;
    cout << "Average Score: " << virat.averageScore << endl;

    cout<<"\n"<<endl;

    Cricketer sachin;
    sachin.name = "Sachin Tendulkar";
    sachin.age = 47;
    sachin.noOfTestMatches = 200;
    sachin.averageScore = 53;

    cout<< "Cricketer 2:- \n\nName:" << sachin.name << endl;
    cout << "Age: " << sachin.age << endl;
    cout << "Test Matches: " << sachin.noOfTestMatches << endl;
    cout << "Average Score: " << sachin.averageScore << endl;

    return 0;

}
