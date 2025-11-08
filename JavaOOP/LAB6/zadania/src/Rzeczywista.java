import java.util.InputMismatchException;
import java.util.Scanner;

public class Rzeczywista {

    public static void pobieranieLiczby(){
        Scanner scan = new Scanner(System.in);
        try {
            double x = scan.nextDouble();
            double cecha,mantysa, iloraz;
            cecha = Math.floor(x);
            mantysa = Math.abs(x - cecha);
            iloraz = cecha/mantysa;
            System.out.println("Cecha: " + cecha);
            System.out.println("Mantysa: " + mantysa);
            System.out.println("Iloraz: " + iloraz);
        }catch (InputMismatchException e ){
            System.err.println("podales zla liczbe");
            pobieranieLiczby();
        }
    }
}
