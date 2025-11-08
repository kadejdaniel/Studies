import java.util.InputMismatchException;
import java.util.Scanner;

public class Calkowita {

    public static int pobieranieCalkowita() {
        Scanner scan = new Scanner(System.in);

        try {
            System.out.println("Podaj liczbę całkowitą z zakresu 99 - 999:");
            int liczba = scan.nextInt();

            // sprawdzenie zakresu
            if (liczba < 99 || liczba > 999) {
                System.err.println("Liczba poza zakresem. Spróbuj ponownie.");
                return pobieranieCalkowita();
            }

            int sumaKwadratow = 0;
            int temp = liczba;

            while (temp > 0) {
                int cyfra = temp % 10;
                sumaKwadratow += cyfra * cyfra;
                temp /= 10;
            }

            System.out.println("Suma kwadratów cyfr liczby " + liczba + " = " + sumaKwadratow);
            return sumaKwadratow;

        } catch (InputMismatchException e) {
            System.err.println("Wprowadzono nieprawidłowy znak. Podaj liczbę całkowitą.");
            return pobieranieCalkowita();
        }
    }
}