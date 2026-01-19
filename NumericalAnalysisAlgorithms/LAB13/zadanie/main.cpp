#include <iostream>
#include <cmath>

using namespace std;


double funkcja(double x) {
    return x * x * x - 71.0;
}

double pochodna(double x) {
    return 3.0 * x * x;
}
//ds
int main() {

    double epsilon;
    cout << "Podaj dokladnosc epsilon: ";
    cin >> epsilon;


    double a = 4.0;
    double b = 5.0;
    double srodek;
    int iteracjeBisekcji = 0;

    if (funkcja(a) * funkcja(b) >= 0) {
        cout << "nie spelniono zalozen" << endl;
    } else {

        do {
            srodek = (a + b) / 2.0;
            if (funkcja(a) * funkcja(srodek) < 0)
                b = srodek;
            else
                a = srodek;

            iteracjeBisekcji++;

        } while (fabs(funkcja(srodek)) > epsilon);

        cout << "Metoda bisekcji:" << endl;
        cout << "Pierwiastek: " << srodek << endl;
        cout << "Wartosc funkcji: " << funkcja(srodek) << endl;
        cout << "Liczba iteracji: " << iteracjeBisekcji << endl;
        cout << endl;
    }

    double x0 = 1.0;
    double x1;
    int iteracjeNewtona = 0;

    if (pochodna(x0) == 0) {
        cout << "Pochodna rowna 0 " << endl;
    } else {

        do {
            x1 = x0 - funkcja(x0) / pochodna(x0);
            x0 = x1;
            iteracjeNewtona++;

        } while (fabs(funkcja(x1)) > epsilon);

        cout << "Metoda Newtona:" << endl;
        cout << "Pierwiastek: " << x1 << endl;
        cout << "Wartosc funkcji: " << funkcja(x1) << endl;
        cout << "Liczba iteracji: " << iteracjeNewtona << endl;
    }

    return 0;
}
