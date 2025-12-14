// #include <iostream>
// #include <math.h>
//
// using namespace std;
//
// double krok(double a, double b, double m){
//     return (b-a)/m;
// }
//
// double trapezy(double h, double *fi, int m){
//     double sum = 0.5*fi[0];
//     for(int i = 1; i<m; i++){
//         sum += fi[i];
//     }
//     sum += 0.5*fi[m];
//     return h*sum;
// }
//
// double simpson(double h, double *fi, int m){
//     double sum = 0;
//     double p   = 0;
//     double n   = 0;
//
//     for ( int i = 1; i<m; i++ ){
//         if( i % 2 == 0)
//             p += fi[i];
//         else
//             n += fi[i];
//     }
//     sum += (fi[0] + fi[m]);
//     sum += 4*n;
//     sum += 2*p;
//     return (h/3)*sum;
// }
//
// double funkcja_1(double x){
//     return sin(x)*sin(x)+2;
// }
//
// double funkcja_2(double x){
//     return (exp(x)*2*x*x*x);
// }
//
// void liczenie_calki(double a, double b, int m, int wzor, int funkcja){
//     double
//         h = krok(a,b,m),
//         *fi = new double[m+1],
//         ost_krok = 0
//     ;
//     switch ( wzor ){
//         case 1:
//             cout << "Wzor Trapezow - ";
//             break;
//         case 2:
//             cout << "Wzor Simpsona - ";
//             break;
//         default:
//             break;
//     }
//     switch ( funkcja ){
//         case 1:
//             cout << "0|2pi sin(x)^2+2dx" << endl;
//             break;
//         case 2:
//             cout << "0|2 e^x * 2x^3 dx" << endl;
//             break;
//         default:
//             break;
//     }
//
//     cout << "a = " << a << endl
//          << "b = "<< b  << endl
//          << "h = " << h << endl;
//     cout << endl << endl;
//     cout << "i\tx\tf(x)" << endl;
//     switch ( funkcja ){
//         case 1:
//             for ( int i = 0; i<=m; i++ ){
//                 fi[i]    = funkcja_1(ost_krok+h);
//                 cout << i << "\t" << ost_krok  << "\t" << fi[i] << endl;
//                 ost_krok = ost_krok+h;
//             }
//             break;
//         case 2:
//             for ( int i = 0; i<=m; i++ ){
//                 fi[i]    = funkcja_2(ost_krok+h);
//                 cout << i << "\t" << ost_krok  << "\t" << fi[i] << endl;
//                 ost_krok = ost_krok+h;
//             }
//             break;
//         default:
//             break;
//
//     }
//     double wynik;
//     switch ( wzor ){
//         case 1:
//             wynik = trapezy(h, fi, m);
//             cout << "T" << m << " = " << wynik << endl;
//             break;
//         case 2:
//             wynik = simpson(h, fi, m);
//             cout << "S(f) = " << wynik << endl;
//             break;
//         default:
//             break;
//     }
//
// }
//
// int main(){
//     int m;
//     int calka;
//     int wzor;
//     while ( true ){
//         cout << "Podaj liczbe podprzedzialow (m>1): ";
//         cin >> m;
//         if ( m < 0 )
//             continue;
//         cout << "Podaj calke: "         << endl;
//         cout << "1) 0|2pi sin(x)^2+2dx" << endl;
//         cout << "2) 0|2 e^x * 2x^3 dx"  << endl;
//         cin >> calka;
//         cout << endl;
//
//         cout << "Podaj wzor: "         << endl;
//         cout << "1) Wzor zlozony trapezow" << endl;
//         cout << "2) Wzor zlozony Simpsona"  << endl;
//         cin >> wzor;
//         cout << endl;
//         switch ( calka ){
//         case 1:
//             liczenie_calki( 0, 2*M_PI, m, wzor, calka );
//             break;
//         case 2:
//             liczenie_calki( 0, 2, m, wzor, calka );
//             break;
//         default:
//             break;
//         }
//
//
//     }
//
//     return 0;
// }
