#include <iostream>
using namespace std;

struct Punkt {
    int x;
    int wartosc;
};
//sortowanie x'ow rosnaco
bool sortujPunkty(Punkt *&punkty, int liczbaPunktow) {
    for (int i = 0; i < liczbaPunktow; i++) {
        for (int j = 1; j < liczbaPunktow - i; j++) {
            if (punkty[j - 1].x > punkty[j].x) {
                swap(punkty[j - 1], punkty[j]);
            } else if (punkty[j - 1].x == punkty[j].x) {
                cout << "Blad: punkty o tych samych x (" << punkty[j].x << ")!" << endl;
                return false;
            }
        }
    }
    return true;
}

// pierwszy iloraz różnicowy
int ilorazRoznicowyPierwszy(Punkt *punkty, int i) {
    return (punkty[i + 1].wartosc - punkty[i].wartosc) / (punkty[i + 1].x - punkty[i].x);
}

// Liczy dowolny (n-tego rzędu) iloraz różnicowy f[x_i, ..., x_{i+n}]
int ilorazRoznicowy(Punkt *punkty, int i, int rzad) {
    if (rzad == 0)
        return 1;
    else if (rzad == 1)
        return ilorazRoznicowyPierwszy(punkty, i);

    return (ilorazRoznicowy(punkty, i + 1, rzad - 1) - ilorazRoznicowy(punkty, i, rzad - 1)) /
           (punkty[i + rzad].x - punkty[i].x);
}

void interpolacjaNewtona(Punkt *punkty, int liczbaPunktow, int punktP) {
    cout << "tabela ilorazów różnicowych: " << endl;
    cout << "x\tf(x)\t" << endl;


    for (int i = 0; i < liczbaPunktow; i++) {
        cout << punkty[i].x << "\t" << punkty[i].wartosc << "\t";
        for (int j = 1; j <= i; j++) {
            cout << ilorazRoznicowy(punkty, i - j, j) << "\t";
        }
        cout << endl;
    }

    // Liczymy wartość wielomianu Wn(p)
    cout << "Obliczanie W_" << liczbaPunktow - 1 << "(" << punktP << "):" << endl;

    int wynik = punkty[0].wartosc;
    cout << "W(" << punktP << ") = " << punkty[0].wartosc;

    for (int i = 1; i < liczbaPunktow; i++) {
        int czynnik = ilorazRoznicowy(punkty, 0, i);
        int iloczyn = 1;
        cout << " + " << czynnik;

        for (int j = 0; j < i; j++) {
            iloczyn *= (punktP - punkty[j].x);
            cout << " * (" << punktP << " - " << punkty[j].x << ")";
        }

        wynik += czynnik * iloczyn;
    }

    cout << " = " << wynik << endl;
    cout << "\nW(" << punktP << ") ≈ " << wynik << endl;
}

//
int main() {
    int liczbaWezlow;
    int punktP;

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

    // sprawdzenie poprawności węzłów (czy są różne)
    if (sortujPunkty(punkty, liczbaWezlow + 1) == false)
        return 1;

    // sprawdzenie czy punkt P mieści się w przedziale [x0, xn]
    if (!(punktP >= punkty[0].x && punktP <= punkty[liczbaWezlow].x)) {
        cout << "Punkt p nie nalezy do [" << punkty[0].x << ", " << punkty[liczbaWezlow].x << "]" << endl;
        return 1;
    }


    interpolacjaNewtona(punkty, liczbaWezlow + 1, punktP);

    delete[] punkty;
    return 0;
}
