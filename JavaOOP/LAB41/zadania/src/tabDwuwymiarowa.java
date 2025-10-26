import java.util.Random;

public class tabDwuwymiarowa {



    public static void zad1() {
        int tabDwu[][] = new int[20][20];

        Random rand = new Random();
        int size = rand.nextInt(21);
        int[][] tablica = new int[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                tabDwu[i][j] = rand.nextInt(100);
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(tabDwu[i][j] + " ");
            }
            System.out.println();
        }
    }
}

