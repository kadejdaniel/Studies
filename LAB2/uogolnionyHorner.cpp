#include<iostream>
using namespace std;

void dzieleniePrzezDwumian(int stopien, int wsp[], int p) {
    int wynik[20];
    wynik[0] = wsp[0];
    cout << "krok 0: " << wynik[0] << endl;

    for (int i = 1; i <= stopien; i++) {
        wynik[i] = wsp[i] + wynik[i - 1] * p;
        cout << "krok " << i << ": " << wynik[i] << endl;
    }

    cout << endl;
}


void zad21(int stopien, int tab[], int punkt) {
    double wynik[10];
    wynik[0] = tab[0];

    cout << "krok 0: wynik = " << wynik[0] << endl;

    for (int i = 1; i <= stopien; i++) {
        wynik[i] = tab[i] + wynik[i - 1] * punkt;
        cout << "krok " << i << ": wynik = " << wynik[i] << endl;
    }

    cout << "Wartosc wielomianu w punkcie " << punkt
            << " wynosi: " << wynik[stopien] << endl;
}


int silnia(int n) {
    if (n < 2)
        return 1;
    return n * silnia(n - 1);
}

void horner(double wsp[], int stopien, double punkt) {
    for (int i = 0; i <= stopien; i++) {
        //cout << "i = " << i << endl;
        for (int j = 1; j <= stopien - i; j++) {
            //cout << "a[" << j << "] = " << wsp[j - 1] << "*" << punkt << "+" << wsp[j];
            wsp[j] = wsp[j - 1] * punkt + wsp[j];
            //cout << " = " << wsp[j] << endl;
        }
        cout << "W^<" << i << "> (" << punkt << ") = "
                << wsp[stopien - i] << "*" << i << "! = "
                << wsp[stopien - i] * silnia(i) << endl;
    }
}


int main() {
    // int stopien = 4;
    // int tab[] = {2, 0, 3, -5, 2};
    // int punkt = -1;
    //
    // zad21(stopien, tab, punkt);
    // int tab[] = {5,2,-3,7};
    // dzieleniePrzezDwumian(3,tab,3);
    double wsp[] = {-3, 0, 1, -2, 4};
    double punkt = 2;
    int stopien = 4;
    horner(wsp, stopien, punkt);
    return 0;
}