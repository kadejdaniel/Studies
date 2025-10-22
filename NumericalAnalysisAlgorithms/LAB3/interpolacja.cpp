#include <iostream>
using namespace std;

double lagrange(double *wezlyX, double *wartosciY, int liczbaWezlow, double punkt) {
    double wynik = 0.0;
    for (int i = 0; i < liczbaWezlow; i++) {
        double Li = 1;
        for (int j = 0; j < liczbaWezlow; j++) {
            if (j != i) {
                Li *= (punkt - wezlyX[j]) / (wezlyX[i] - wezlyX[j]);
            }
        }
        wynik += wartosciY[i] * Li;
    }
    return wynik;
}

int main() {
    int liczbaWezlow;
    double punkt;

    cout << "Podaj liczbe wezlow: ";
    cin >> liczbaWezlow;

    if (liczbaWezlow <= 1) {
        cout << "Musza byc conajmniej 2 wezly" << endl;
        return 1;
    }

    double *wezlyX = new double[liczbaWezlow];
    double *wartosciY = new double[liczbaWezlow];

    cout << "Podaj wartosci wezlow i funkcji:" << endl;
    for (int i = 0; i < liczbaWezlow; i++) {
        cout << "x[" << i << "] = ";
        cin >> wezlyX[i];

        if (i > 0 && wezlyX[i] <= wezlyX[i - 1]) {
            cout << "zle musi byc spelnione: x0 < x1 < ... < xn" << endl;
            return 1;
        }

        cout << "f[" << i << "] = ";
        cin >> wartosciY[i];
    }

    cout << "Podaj punkt w ktorym chcesz obliczyc wartosc funkcji: ";
    cin >> punkt;
    if (punkt < wezlyX[0] || punkt > wezlyX[liczbaWezlow - 1]) {
        cout << "zly zakres (punkt poza przedzialem wezlow)" << endl;
        return 0;
    }

    double wynik = lagrange(wezlyX, wartosciY, liczbaWezlow, punkt);

    cout << "Przyblizona wartosc funkcji w punkcie x = " << punkt
            << " wynosi: " << wynik << endl;


    return 0;
}
