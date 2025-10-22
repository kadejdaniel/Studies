// #include <iostream>
// using namespace std;
//
// // Funkcja liczy wartość wielomianu Lagrange’a w punkcie "punkt"
// double lagrange(double *wezlyX, double *wartosciY, int liczbaWezlow, double punkt) {
//     double wynik = 0.0;
//
//     // przechodzimy po każdym węźle i obliczamy jego składnik
//     for (int i = 0; i < liczbaWezlow; i++) {
//         double Li = 1.0; // to jest l_i(punkt)
//
//         // liczymy iloczyn dla danego i
//         for (int j = 0; j < liczbaWezlow; j++) {
//             if (j != i) {
//                 Li *= (punkt - wezlyX[j]) / (wezlyX[i] - wezlyX[j]);
//             }
//         }
//
//         // dodajemy składnik y_i * l_i(x)
//         wynik += wartosciY[i] * Li;
//     }
//
//     return wynik;
// }
//
// int main() {
//     int liczbaWezlow;
//     double punkt;
//
//     cout << "Podaj liczbe wezlow: ";
//     cin >> liczbaWezlow;
//
//     if (liczbaWezlow <= 1) {
//         cout << "Musi byc co najmniej 2 wezly!" << endl;
//         return 1;
//     }
//
//     double *wezlyX = new double[liczbaWezlow];
//     double *wartosciY = new double[liczbaWezlow];
//
//     cout << "Podaj punkt, w ktorym chcesz obliczyc wartosc funkcji: ";
//     cin >> punkt;
//
//     cout << "Podaj wartosci wezlow i funkcji:" << endl;
//     for (int i = 0; i < liczbaWezlow; i++) {
//         cout << "x[" << i << "] = ";
//         cin >> wezlyX[i];
//
//         if (i > 0 && wezlyX[i] <= wezlyX[i - 1]) {
//             cout << "Blad! Musi byc spelnione zalozenie interpolacji: x0 < x1 < ... < xn" << endl;
//             delete[] wezlyX;
//             delete[] wartosciY;
//             return 1;
//         }
//
//         cout << "f[" << i << "] = ";
//         cin >> wartosciY[i];
//     }
//
//     double wynik = lagrange(wezlyX, wartosciY, liczbaWezlow, punkt);
//
//     cout << "\nPrzyblizona wartosc funkcji w punkcie x = " << punkt << " wynosi: " << wynik << endl;
//
//     delete[] wezlyX;
//     delete[] wartosciY;
//
//     return 0;
// }
