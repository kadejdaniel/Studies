package figury;

import java.awt.*;

public class Trojkat extends Wielokat {
    double h;
    double a;

    public Trojkat(int pole, int obwod, Color color, int lWierzcholkow, int lBokow, int sumaKatowWew, double h, double a) {
        super(pole, obwod, color, lWierzcholkow, lBokow, sumaKatowWew);
        this.h = h;
        this.a = a;
    }
}
