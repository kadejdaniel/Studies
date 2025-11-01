package figury;

import java.awt.*;

public class Figura {
    protected double pole;
    protected double obwod;
    private Color color;

    public void rysuj(){
        System.out.println("Trwa rysowanie: ");
    };

    public void usun(){
        System.out.println("Trwa usuwanie:");
    };

    public void przesun(){

    };

    public String podajParametry(){

        return "";
    };

    // gettery i settery
    public int getPole() {
        return pole;
    }

    public void setPole(int pole) {
        this.pole = pole;
    }

    public int getObwod() {
        return obwod;
    }

    public void setObwod(int obwod) {
        this.obwod = obwod;
    }

    public Color getColor() {
        return color;
    }

    public void setColor(Color color) {
        this.color = color;
    }

    // konstruktor
    public Figura(int pole, int obwod, Color color) {
        this.pole = pole;
        this.obwod = obwod;
        this.color = color;
    }
    // bezparametorowy
    public Figura(){};

}
