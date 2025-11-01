package figury;

import java.awt.*;

class Wielokat extends Figura {
    private int lWierzcholkow;
    private int lBokow;
    private int sumaKatowWew;

public double metodaObliczajaca(int n){
    double sumaKatow = 0;
    sumaKatow = (n-2)*(180*(Math.PI/180));
    return sumaKatow;
    }

    @Override
    public void rysuj() {
        super.rysuj();
        System.out.println(" "+ " Wielokata");
    }

    public int getlWierzcholkow() {
        return lWierzcholkow;
    }

    public void setlWierzcholkow(int lWierzcholkow) {
        this.lWierzcholkow = lWierzcholkow;
    }

    public int getlBokow() {
        return lBokow;
    }

    public void setlBokow(int lBokow) {
        this.lBokow = lBokow;
    }

    public int getSumaKatowWew() {
        return sumaKatowWew;
    }

    public void setSumaKatowWew(int sumaKatowWew) {
        this.sumaKatowWew = sumaKatowWew;
    }

    public Wielokat(int pole, int obwod, Color color, int lWierzcholkow, int lBokow, int sumaKatowWew) {
        super(pole, obwod, color);
        this.lWierzcholkow = lWierzcholkow;
        this.lBokow = lBokow;
        this.sumaKatowWew = sumaKatowWew;
    }
}
