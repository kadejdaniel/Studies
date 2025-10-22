// #include <iostream>
// using namespace std;
// int oblicz_L(int *wezlyX, int indeks_i, int liczbaWezlow, int x_punkt) {
//     int suma = 0;
//     for (int j = 0; j < liczbaWezlow; j++) {
//         if (indeks_i == j)
//             continue;
//         suma += (x_punkt - wezlyX[j]) / (wezlyX[indeks_i] - wezlyX[j]);
//     }
//     return suma;
// }
// void obliczWielomian(int *wezlyX, int *wartosciF, int liczbaWezlow, int x_punkt) {
//     int suma = 0;
//     cout << "W" << liczbaWezlow << "(" << x_punkt << ") = ";
//
//     for (int j = 0; j <= liczbaWezlow; j++) {
//         cout << wartosciF[j] << " * " << oblicz_L(wezlyX, j, liczbaWezlow, x_punkt);
//         if (j < liczbaWezlow)
//             cout << " + ";
//         suma += wartosciF[j] * oblicz_L(wezlyX, j, liczbaWezlow, x_punkt);
//     }
//
//     cout << " = " << suma << endl << endl;
// }
//
// int main() {
//     int *wezlyX;     // tablica wartości x
//     int *wartosciF;  // tablica wartości  f(x)
//     int liczbaWezlow;
//     int x_punkt;
//
//     cout << "Podaj liczbe wezlow: ";
//     cin >> liczbaWezlow;
//
//     wezlyX = new int[liczbaWezlow + 1];
//     wartosciF = new int[liczbaWezlow + 1];
//
//     cout << "Podaj punkt : ";
//     cin >> x_punkt;
//
//     cout << "Wypelnij tablice wezlow i wartosci funkcji:" << endl;
//     for (int j = 0; j <= liczbaWezlow; j++) {
//         cout << "x[" << j << "] = ";
//         cin >> wezlyX[j];
//
//         if (j != 0 && wezlyX[j] < wezlyX[j - 1]) {
//             cout << "zle węzły muszą być rosnące (x0 < x1 < ... < xn)" << endl;
//             return 1;
//         }
//
//         cout << "f[" << j << "] = ";
//         cin >> wartosciF[j];
//     }
//
//     obliczWielomian(wezlyX, wartosciF, liczbaWezlow, x_punkt);
//
//     return 0;
// }
