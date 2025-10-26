public class tabJednowymiarowa {
    //
    public static void zad1(){

        int mojaTablica[] = new int[100];
        for (int i = 0; i < mojaTablica.length ; i++) {
            mojaTablica[i] = i;
        }

        for (int i = 0; i < mojaTablica.length ; i++) {
            System.out.print(i);
        }
    }

    public static void zad2(int[] array){
        int columns = 10;
        int rows = array.length/columns;

//
        double[] suma = new double[columns];

        for (int i = 0; i < array.length; i++) {
            if (i<10){
                System.out.print("0" + i + " ");
            }else{
                System.out.print(i + " ");

            }
            if ((i+1)%10==0){
                System.out.println();
            }

            suma[i%columns] += array[i];

        }
        System.out.println("Średnie: ");
        for (int i = 0; i < columns; i++) {
            System.out.printf("%.2f ", suma[i] / rows);
        }

    }
}
