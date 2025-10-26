import java.util.Random;
//
public class Okrag {
    private int x;
    private int y;
    private int r;


    public Okrag() {

        Random rand = new Random();
        this.x = rand.nextInt(91) + 5;
        this.y = rand.nextInt(91) + 5;
        this.r = rand.nextInt(5);
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int getR() {
        return r;
    }

    public static Okrag[] zad1(int n) {
        Okrag[] tabObiektow = new Okrag[n];

        for (int i = 0; i < n; i++) {
            tabObiektow[i] = new Okrag();

        }
        return tabObiektow;
    }

    public static void wyswietl(Okrag[] tab) {
        for (Okrag o : tab) { // dla kazdego obiektu "o" typu "Okrag" znajdujacego sie w tablicy tab zrob ponizsza funkcje
            System.out.println("x = " + o.getX() + " y = " + o.getY() + " r = " + o.getR());

        }

    }

    public static void zad2(Okrag o1, Okrag o2) {

        double d = Math.sqrt(Math.pow(o1.x - o2.x, 2) + Math.pow(o1.y - o2.y, 2));
        if (d == 0 && o1.r == o2.r) {
            System.out.println("Okręgi pokrywają się.");
        } else if (d == o1.r + o2.r || d == Math.abs(o1.r - o2.r)) {
            System.out.println("Okręgi są styczne.");
        } else if (d > o1.r + o2.r) {
            System.out.println("Okręgi są rozłączne (zewnętrznie).");
        } else if (d < Math.abs(o1.r - o2.r)) {
            System.out.println("Okręgi są rozłączne (wewnętrznie).");
        } else {
            System.out.println("Okręgi przecinają się.");
        }
    }
}
