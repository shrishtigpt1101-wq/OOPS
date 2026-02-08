#include <iostream>
#include <vector>
using namespace std;

class Cricketer {
public:
    string name;
    int age;
    int noOfTestMatches;
    int averageScore;
};

int main() {
    vector<Cricketer> cricketers;
    int n = 2; // Number of cricketers to input

    // Taking input
    for (int i = 0; i < n; i++) {
        Cricketer c;
        cout << "Enter name: ";
        cin >> c.name;
        cout << "Enter age: ";
        cin >> c.age;
        cout << "Enter number of test matches: ";
        cin >> c.noOfTestMatches;
        cout << "Enter average score: ";
        cin >> c.averageScore;

        cricketers.push_back(c); // Add to vector
        cout << endl;
    }

    // Displaying cricketers
    cout << "\n--- Cricketer Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << cricketers[i].name << endl;
        cout << "Age: " << cricketers[i].age << endl;
        cout << "Test Matches: " << cricketers[i].noOfTestMatches << endl;
        cout << "Average Score: " << cricketers[i].averageScore << endl;
        cout << endl;
    }

    return 0;
}
