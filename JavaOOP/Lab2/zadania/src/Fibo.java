public class Fibo {

    public static void fibonnaci(int n){
     int liczba = 1;
     int suma = 0;
     for (int i = 1; i <= n; i++) {
         suma = liczba + suma;
         liczba = suma;
     }
     System.out.println(suma);
    }
}
