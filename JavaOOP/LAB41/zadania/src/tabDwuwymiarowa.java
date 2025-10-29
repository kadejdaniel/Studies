import java.util.Random;

public class tabDwuwymiarowa {


    public static int[][] utworzTablice() {
        Random rand = new Random();
        int size = rand.nextInt(11) + 10;
        int[][] tablica = new int[size][size];

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j) {
                    if (rand.nextBoolean()){
                        tablica[i][j] = 1;
                    }else{
                        tablica[i][j] = -1;
                    }
               } else {

                    tablica[i][j] = rand.nextInt(41) - 20;
                }
            }
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.printf("%4d", tablica[i][j]);
            }
            System.out.println();
        }

        return tablica;
    }

    public static double obliczStosunek(int[][] tablica) {
        int sumaParzysteWiersze = 0;
        int sumaNieparzysteKolumny = 0;

        for (int i = 0; i < tablica.length; i++) {
            for (int j = 0; j < tablica[i].length; j++) {
                if (i % 2 == 0) { // parzysty wiersz
                    sumaParzysteWiersze += tablica[i][j];
                }
                if (j % 2 == 1) { // nieparzysta kolumna
                    sumaNieparzysteKolumny += tablica[i][j];
                }
            }
        }

        System.out.println("Suma parzyste wiersze: " + sumaParzysteWiersze);
        System.out.println("Suma nieparzyste kolumny: " + sumaNieparzysteKolumny);

        return (double) sumaParzysteWiersze / sumaNieparzysteKolumny;
    }
}
