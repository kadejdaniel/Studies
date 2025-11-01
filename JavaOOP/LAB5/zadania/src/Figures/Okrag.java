package figury;

import java.awt.*;

public class Okrag extends Elipsa {
    private double promien;
    private double srodekX;
    private double srodekY;

    public Okrag(int pole, int obwod, Color color, double promien, double srodekX, double srodekY, double a, double b, double c, double x, double y){
        super(pole,obwod,color,a,b,c,y,x);
        this.promien = promien;
        this.srodekX = srodekX;
        this.srodekY = srodekY;
    }

    @Override
    public void rysuj() {
        super.rysuj();
        System.out.println("test dla okrag");
    }
}
