#include <iostream>
#include <cmath>
using namespace std;

void binarne() {
    int calk;
    cout << "podaj liczbe calkowita" << endl;
    cin >> calk;


    string bin = "";
    int liczba = abs(calk);

    while (liczba > 0) {
        int reszta = liczba % 2;
        bin = to_string(reszta) + bin;
        liczba /= 2;
    }

    cout << "liczba binarna: " << bin << endl;
}


int main() {
    binarne();
    return 0;
}