public class Petle {

   public static void wypiszFor(){
       for (int i = 5; i <80 ; i+=15) {
           System.out.println(i);
       }
    }

    public static void wypiszWhile(){
       int i =0;
       while (i<80){
           System.out.println(i);
           i+=15;
       }
    }

    public static void wypiszDoWhile(){
       int i =0;
       do {
           System.out.println(i);
           i+=15;
       } while (i<80);
    }


}
