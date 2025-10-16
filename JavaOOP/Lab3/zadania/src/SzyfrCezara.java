import java.util.Scanner;

public class SzyfrCezara {


    public static String OdczytanieTekstu() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Podaj tekst:");
        String tekst = sc.nextLine();
        return tekst;
    }

    public static String Szyfrowanie(String tekst, int przesun) {
        String wynik = " ";
        for (int i = 0; i < tekst.length(); i++) {
            char znak = tekst.charAt(i);
            char zaszyfrowany = (char) (znak + przesun);
            wynik += zaszyfrowany;
        }
return wynik;
    }

    public static boolean palindrom(String tekst) {
        String odwrocony = "";
        for (int i = tekst.length() - 1; i >= 0; i--) {
            odwrocony += tekst.charAt(i);
        }

        return tekst.equals(odwrocony);

    }
    public static String Deszyfrowanie(String tekst, int przesun) {
        return Szyfrowanie(tekst, 26 - (przesun % 26));
    }


    public static void CaleZadania() {
        String tekst = OdczytanieTekstu();

        int przesun = 3; // przykładowe przesunięcie
        String zaszyfrowany = Szyfrowanie(tekst, przesun);
        System.out.println("Zaszyfrowany tekst: " + zaszyfrowany);

        String odszyfrowany = Deszyfrowanie(zaszyfrowany, przesun);
        System.out.println("Odszyfrowany tekst: " + odszyfrowany);

        if (palindrom(tekst)) {
            System.out.println("Tekst jest palindromem");
        } else {
            System.out.println("Tekst NIE jest palindromem");
        }
    }
}
