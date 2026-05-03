//  WOOP on Class Matrix to Add and Subt Two Matrix

#include<iostream>
using namespace std;

class Matrix
{
    int M[10][10];
    int r, c;

public:
    void getdata()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter elements:\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin >> M[i][j];
            }
        }
    }

    Matrix add(Matrix m)
    {
        Matrix temp;   // temporary object
        temp.r = r;
        temp.c = c;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.M[i][j] = M[i][j] + m.M[i][j];
            }
        }
        return temp;   // 🔥 return result
    }

    Matrix sub(Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = c;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.M[i][j] = M[i][j] - m.M[i][j];
            }
        }
        return temp;
    }

    void show()
    {
        cout << "\nMatrix:\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1, m2, m3, m4;

    m1.getdata();
    m2.getdata();

    m3 = m1.add(m2);   // addition
    m4 = m1.sub(m2);   // subtraction

    cout << "\nAddition:";
    m3.show();

    cout << "\nSubtraction:";
    m4.show();

    return 0;
}