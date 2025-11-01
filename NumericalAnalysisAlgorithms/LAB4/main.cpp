#include <iostream>
using namespace std;

struct Punkt {
    double x;
    double wartosc;
};

// Sortowanie wezlow po x (rosnaco)
bool sortujPunkty(Punkt *&punkty, int liczbaPunktow) {
    for (int i = 0; i < liczbaPunktow; i++) {
        for (int j = 1; j < liczbaPunktow - i; j++) {
            if (punkty[j - 1].x > punkty[j].x) {
                swap(punkty[j - 1], punkty[j]);
            } else if (punkty[j - 1].x == punkty[j].x) {
                return false;
            }
        }
    }
    return true;
}

// Pierwszy iloraz roznicowy
double ilorazRoznicowyPierwszy(Punkt *punkty, int i) {
    return (punkty[i + 1].wartosc - punkty[i].wartosc) / (punkty[i + 1].x - punkty[i].x);
}

// Iloraz roznicowy dowolnego rzedu f[x_i, ..., x_{i+n}]
double ilorazRoznicowy(Punkt *punkty, int i, int rzad) {
    if (rzad == 0)
        return 1;
    else if (rzad == 1)
        return ilorazRoznicowyPierwszy(punkty, i);

    return (ilorazRoznicowy(punkty, i + 1, rzad - 1) - ilorazRoznicowy(punkty, i, rzad - 1)) /
           (punkty[i + rzad].x - punkty[i].x);
}

// Glowna funkcja - interpolacja Newtona
void interpolacjaNewtona(Punkt *punkty, int liczbaPunktow, double punktP) {
    cout << "Tabela ilorazow roznicowych: " << endl;
    cout << "x\tf(x)\t" << endl;

    for (int i = 0; i < liczbaPunktow; i++) {
        cout << punkty[i].x << "\t" << punkty[i].wartosc << "\t";
        for (int j = 1; j <= i; j++) {
            cout << ilorazRoznicowy(punkty, i - j, j) << "\t";
        }
        cout << endl;
    }

    // Liczenie wartosci wielomianu Wn(p)
    cout << "Obliczanie W_" << liczbaPunktow - 1 << "(" << punktP << "):" << endl;

    double wynik = punkty[0].wartosc;
    cout << "W(" << punktP << ") = " << punkty[0].wartosc;

    for (int i = 1; i < liczbaPunktow; i++) {
        double czynnik = ilorazRoznicowy(punkty, 0, i);
        double iloczyn = 1;
        cout << " + " << czynnik;

        for (int j = 0; j < i; j++) {
            iloczyn *= (punktP - punkty[j].x);
            cout << " * (" << punktP << " - " << punkty[j].x << ")";
        }

        wynik += czynnik * iloczyn;
    }

    cout << " = " << wynik << endl;
    cout << "W(" << punktP << ") = " << wynik << endl;
}

int main() {
    int liczbaWezlow;
    double punktP;

    cout << "Podaj liczbe wezlow: ";
    cin >> liczbaWezlow;

    Punkt *punkty = new Punkt[liczbaWezlow + 1];

    cout << "Podaj punkt p = ";
    cin >> punktP;

    cout << "Wypelnij tablice xi oraz f(xi):" << endl;
    for (int j = 0; j <= liczbaWezlow; j++) {
        cout << "x[" << j << "] = ";
        cin >> punkty[j].x;
        cout << "f[" << j << "] = ";
        cin >> punkty[j].wartosc;
    }

    // Sprawdzenie poprawnosci wezlow
    if (!sortujPunkty(punkty, liczbaWezlow + 1))
        return 1;

    // Sprawdzenie czy punkt P miesci sie w zakresie [x0, xn]
    if (!(punktP >= punkty[0].x && punktP <= punkty[liczbaWezlow].x)) {
        cout << "Punkt p nie nalezy do [" << punkty[0].x << ", " << punkty[liczbaWezlow].x << "]" << endl;
        return 1;
    }

    interpolacjaNewtona(punkty, liczbaWezlow + 1, punktP);

    delete[] punkty;
    return 0;
}
