public class ASCII {


    public static int SumaASCII(String lancuch) {
        int suma = 0;
        for (int i = 0; i < lancuch.length(); i++) {
            char znak = lancuch.charAt(i);
            if (znak > 'a' && znak < 'z') {
                suma += (int) znak;

            }
        }
    return suma;
    }


}
