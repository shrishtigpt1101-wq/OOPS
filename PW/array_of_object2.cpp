#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string name;
    int age;
    int noOfTestMatches;
    int averageScore;
};

int main() {
    Cricketer cricketers[20]; // Array for 20 cricketers

    // Input
    for (int i = 0; i < 2; i++) { // change 2 → 20 for full requirement
        cout << "Enter details for Cricketer " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> cricketers[i].name; // simple input, no spaces in name
        cout << "Age: ";
        cin >> cricketers[i].age;
        cout << "Number of Test Matches: ";
        cin >> cricketers[i].noOfTestMatches;
        cout << "Average Score: ";
        cin >> cricketers[i].averageScore;
    }

    // Output
    cout << "\n--- Cricketer Records ---\n";
    for (int i = 0; i < 2; i++) {
        cout << "Name: " << cricketers[i].name << endl;
        cout << "Age: " << cricketers[i].age << endl;
        cout << "Test Matches: " << cricketers[i].noOfTestMatches << endl;
        cout << "Average Score: " << cricketers[i].averageScore << endl;
        cout << endl;
    }

    return 0;
}
