import java.util.InputMismatchException;
import java.util.Scanner;

public class Kalkulator {

    public static void dodawanie() {
        try {
            System.out.println("Podaj dwie liczby");
            Scanner scan = new Scanner(System.in);
            double y = scan.nextDouble();
            double x = scan.nextDouble();
            double suma = x + y;
            System.out.println("Suma: " + suma);
        } catch (InputMismatchException e) {
            System.err.println("Podales nieprawidlowy znak");
            dodawanie();
        }
    }

    public static void odejmowanie() {
        Scanner scan = new Scanner(System.in);
        try {
            System.out.println("Podaj dwie liczby");
            double x, y;
            x = scan.nextDouble();
            y = scan.nextDouble();
            double suma = x - y;
            System.out.println("Wynik odejmowania: " + suma);

        } catch (InputMismatchException e) {
            System.err.println("Podales zly znak");
            odejmowanie();
        }
    }

    public static void mnozenie() {
    Scanner scan = new Scanner(System.in);

    try {
        double x, y;
        x = scan.nextDouble();
        y = scan.nextDouble();
        double suma = x * y;
    } catch (InputMismatchException e ){
        System.err.println("zly znak");
        mnozenie();
    }
}
    public static void dzielenie() {
        Scanner scan = new Scanner(System.in);
        try {
            System.out.println("Podaj dwie liczby (dzielna i dzielnik):");
            double x = scan.nextDouble();
            double y = scan.nextDouble();
            if (y == 0) {
                System.err.println("Nie można dzielić przez zero");
                dzielenie();
                return;
            }
            double wynik = x / y;
            System.out.println("Wynik dzielenia: " + wynik);
        } catch (InputMismatchException e) {
            System.err.println("Podano nieprawidłowy znak");
            dzielenie();
        }
    }

    public static void pierwiastkowanie() {
        Scanner scan = new Scanner(System.in);
        try {
            System.out.println("Podaj liczbę do spierwiastkowania:");
            double x = scan.nextDouble();
            if (x < 0) {
                System.err.println("Nie można spierwiastkować liczby ujemnej");
                pierwiastkowanie();
                return;
            }
            double wynik = Math.sqrt(x);
            System.out.println("Pierwiastek kwadratowy z " + x + " = " + wynik);
        } catch (InputMismatchException e) {
            System.err.println("Podano nieprawidłowy znak.");
            pierwiastkowanie();
        }
    }

    public static void potegowanie() {
        Scanner scan = new Scanner(System.in);
        try {
            System.out.println("Podaj podstawę potęgi i wykładnik:");
            double podstawa = scan.nextDouble();
            double wykladnik = scan.nextDouble();
            double wynik = Math.pow(podstawa, wykladnik);
            System.out.println("Wynik potęgowania: " + wynik);
        } catch (InputMismatchException e) {
            System.err.println("Podano nieprawidłowy znak");
            potegowanie();
        }
    }

}


