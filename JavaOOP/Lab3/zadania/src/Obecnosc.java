public class Obecnosc {


    public static int ileRazy(char znak, String lancuch) {

        if (lancuch.length()<0){
            return 0;
        }

        int licznik = 0;
        for (int i = 0; i < lancuch.length(); i++) {
            if (lancuch.charAt(i) == znak) {
                licznik++;
            }
        }
        return licznik;
    }

}


