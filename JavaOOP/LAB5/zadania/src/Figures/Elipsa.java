package figury;

import java.awt.*;

import static java.lang.Math.sqrt;

class Elipsa extends Figura {
    private double a;
    private double b;
    private double x;
    private double y;
    private double c;


    public double metodaObliczajaca(){
        System.out.println("Metoda polegajaca na obliczeniu odległości ognisk od środka elipsy");
        c = sqrt((a*a-b*b));
        return c;
    }

    @Override
    public void rysuj() {
        super.rysuj();
        System.out.println("Elipsy");
    }

    @Override
    public void usun() {
        super.usun();
        System.out.println("polos" + " " + a);
    }

    public double getA() {
        return a;
    }

    public void setA(double a) {
        this.a = a;
    }

    public double getB() {
        return b;
    }

    public void setB(double b) {
        this.b = b;
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public double getC() {
        return c;
    }

    public void setC(double c) {
        this.c = c;
    }

    public Elipsa(int pole, int obwod, Color color, double a, double b, double x, double y, double c) {
        super(pole, obwod, color);
        this.a = a;
        this.b = b;
        this.x = x;
        this.y = y;
        this.c = c;
    }
}
