package figury;

import java.awt.*;

public class Prostokat extends Wielokat {
    double b;
    double a;

    public Prostokat(int pole, int obwod, Color color, int lWierzcholkow, int lBokow, int sumaKatowWew, double b, double a) {
        super(pole, obwod, color, lWierzcholkow, lBokow, sumaKatowWew);
        this.b = b;
        this.a = a;
    }
}
