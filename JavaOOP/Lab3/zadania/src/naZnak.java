import java.util.Scanner;

public class naZnak {


    public static void liczbaNaZnak(){

        Scanner sc = new Scanner(System.in);
        System.out.println("podaj liczbe z zakresu od 33 do 126");
        int liczba =  sc.nextInt();
        if (liczba >= 33 && liczba <= 126){
            char znak =  (char) liczba;
            System.out.println("liczba ta odpowiada znaku " + znak) ;
        }


    }
}
