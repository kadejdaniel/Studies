public class Owoc {
    String nazwa;
    String rodzaj;
    int iloscPestek;
    double masa;

    public Owoc(String nazwa, String rodzaj, int iloscPestek, double masa) {
        this.nazwa = nazwa;
        this.rodzaj = rodzaj;
        this.iloscPestek = iloscPestek;
        this.masa = masa;
    }

    public String getNazwa() {
        return nazwa;
    }

    public String getRodzaj() {
        return rodzaj;
    }

    public int getIloscPestek() {
        return iloscPestek;
    }

    public double getMasa() {
        return masa;
    }


}
