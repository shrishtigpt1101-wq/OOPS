/* WOOP/WAP to pass 2 int to function and perform all 4 arithmetic operations 
and return results in main and print it in main. */

#include <iostream>
using namespace std;

class Arithmetic
{
    int a, b;   // data members
public:
    void getData()
    {
        cout << "Enter two integers: ";
        cin >> a >> b;
    }
    void calculate(int &sum, int &diff, int &prod, float &div)
    {
        sum = a + b;
        diff = a - b;
        prod = a * b;

        if (b != 0)
            div = (float)a / b; // beacause a and b are integers, we need to cast to float for accurate division
        else
            div = 0;
    }
};

int main()
{
    int sum, diff, prod;
    float div;
    Arithmetic obj;
    obj.getData();  // input
    obj.calculate(sum, diff, prod, div);   // processing
    cout << "\nResults:\n";
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << diff << endl;
    cout << "Multiplication: " << prod << endl;

    if (div != 0)
        cout << "Division: " << div << endl;
    else
        cout << "Division not possible (division by zero)" << endl;

    return 0;
}
