/* 3. Loop and / or function based; 
(i) prime or not 
(ii) power ( one no over another) 
(iii) perfect no. (no which is square of other no.) */

#include <iostream>
#include <cmath>
using namespace std;

class NumberOperations
{   int n, base, exp;
public:
    void getData()
    {   cout << "Enter number for prime check: ";
        cin >> n;
        cout << "Enter base and exponent: ";
        cin >> base >> exp;
        cout << "Enter number to check perfect square: ";
        cin >> n; 
    }
    // (i) Prime check (A prime number is a number greater than 1 that has only two factors: 1 and the number itself.)
    void prime()
    {
        if (n <= 1)
        {
            cout << "Not a prime number\n"; 
            return;
        }
        for (int i = 2; i <= n-1 ; i++)
        {
            if (n % i == 0)
            {
                cout << "Not a prime number\n";
                return;
            }
        }cout << "Prime number\n";
    }
    // (ii) Power
    void power()
    {
        cout << "Power = " << pow(base, exp) << endl;
    }
    // (iii) Perfect square (A perfect square is a number that is the square of another whole number.)
    void perfectSquare()
    {
        int root = sqrt(n);

        if (root * root == n)
            cout << n << " is a Perfect Square\n";
        else
            cout << n << " is Not a Perfect Square\n";
    }
};
int main()
{
    NumberOperations A;
    A.getData();
    A.prime();
    A.power();
    A.perfectSquare();
    return 0;
}
