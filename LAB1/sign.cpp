#include <iostream>
#include <cmath>
using namespace std;

int sign(double t) {
    if (t > 0) return 1;
    if (t < 0) return -1;
    return 0;
}

void klasyczne(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    cout << "Delta = " << delta << endl;

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x0 = -b / (2 * a);
        cout << "x0 = " << x0 << endl;
    } else {
        cout << "Brak pierwiastkow rzeczywistych." << endl;
    }
}

void metodaSign(double a, double b, double c) {
    double b2a = (-b) / (2 * a);
    double podPierwiastkiem = pow(b2a, 2) - (c / a);

    if (podPierwiastkiem < 0) {
        cout << "Brak pierwiastkow rzeczywistych." << endl;
        return;
    }

    double x1 = b2a + sign(b2a) * sqrt(podPierwiastkiem);
    double x2 = c / (a * x1);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}

int main() {
    double a1 = 1.000000009, b1 = 2.000000001, c1 = 1.000000001;
    double a2 = 1e-16, b2 = 10, c2 = 1;

    cout << "KLASYCZNE WZORY" << endl;
    cout << endl;
    cout << "Przypadek a)" << endl;
    klasyczne(a1, b1, c1);
    cout << endl;
    cout << "Przypadek b)" << endl;
    klasyczne(a2, b2, c2);
    cout << endl;
    cout << endl << "WZORY Z SIGN" << endl;
    cout << endl;
    cout << "Przypadek a)" << endl;
    metodaSign(a1, b1, c1);
    cout << endl;
    cout << "Przypadek b)" << endl;
    metodaSign(a2, b2, c2);

    return 0;
}
