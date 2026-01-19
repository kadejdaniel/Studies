#include <iostream>
#include <cmath>

using namespace std;

bool cholesky(double A[][4], double L[][4]) {
    const int n = 4;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            double suma = 0.0;

            for (int k = 0; k < j; k++) {
                suma += L[i][k] * L[j][k];
            }

            if (i == j) {
                double wartosc = A[i][i] - suma;

                if (wartosc <= 0) {
                    cout << "wartosc < 0 pod pierwiastkiem" << endl;
                    return false ;
                }

                L[i][j] = sqrt(wartosc);
            } else {
                L[i][j] = (A[i][j] - suma) / L[j][j];
            }
        }
    }
    return true;
}

int main() {
    double A[4][4] = {
        { -9,  -9,  -6,   9},
        {-9,  13,  10, -11},
        {-6,  10,  17,  -5},
        { 9, -11,  -5,  15}
    };

    double L[4][4] = {};

    bool x =cholesky(A, L);
    if (x) {
        cout << "Macierz L:" << endl;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << L[i][j] << "     ";
            }
            cout << endl;
        }

    }

    return 0;
}
