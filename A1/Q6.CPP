// WAP in C++ to Transpose Matrix of M X N.

#include <iostream>
using namespace std;

class Matrix {
    int a[10][10], t[10][10];
    int n, m;

public:
    // Read matrix
    void getMatrix() {
        cout << "Enter matrix size [n][m]: ";
        cin >> n >> m;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
    }

    // Display original matrix
    void showMatrix() {
        cout << "Original Matrix:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Transpose matrix
    void transpose() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                t[j][i] = a[i][j];
            }
        }
    }

    // Display transpose matrix
    void showTranspose() {
        cout << "Transpose Matrix:\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << t[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix obj;

    obj.getMatrix();
    obj.showMatrix();
    obj.transpose();
    obj.showTranspose();

    return 0;
}
