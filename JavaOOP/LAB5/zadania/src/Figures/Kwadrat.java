package figury;

import java.awt.*;

public class Kwadrat extends Prostokat {
    double a;

    public Kwadrat(int pole, int obwod, Color color, int lWierzcholkow, int lBokow, int sumaKatowWew, double b, double a, double a1) {
        super(pole, obwod, color, lWierzcholkow, lBokow, sumaKatowWew, b, a);
        this.a = a1;
    }
}
