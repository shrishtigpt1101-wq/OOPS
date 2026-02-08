#include <iostream>
using namespace std;

class Family
{
public:
    int height;
    int weight;
    string job;
    string study;
    int no_of_sisters;

    // Function to set father details
    void father(int h, int w, string j)
    {
        height = h;
        weight = w;
        job = j;
        cout << "Father's Details:" << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Job: " << job << endl << endl;
    }

    // Function to set mother details
    void mother(int h, int w, string j)
    {
        height = h;
        weight = w;
        job = j;
        cout << "Mother's Details:" << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Job: " << job << endl << endl;
    }

    // Function to set sisters details
    void sisters(int h, int w, string s, int count)
    {
        height = h;
        weight = w;
        study = s;
        no_of_sisters = count;

        cout << "Sister's Details:" << endl;
        cout << "Number of Sisters: " << no_of_sisters << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Study: " << study << endl << endl;
    }
};

int main()
{
    Family f;

    // Set and display family member details
    f.father(175, 70, "Engineer");
    f.mother(160, 60, "Teacher");
    f.sisters(150, 45, "College Student", 2); 

    return 0;
}
