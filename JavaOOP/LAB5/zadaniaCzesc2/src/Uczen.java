public class Uczen extends Dziecko implements Podstawowy,Szkola{
    public Uczen(String imie, int wiek) {
        super(imie, wiek);
    }

    @Override
    public void jedz() {
        super.jedz();
    }

    @Override
    public void pij() {
        super.pij();
    }

    @Override
    public void zabawa() {
        super.zabawa();
    }

    @Override
    public void obowiazki() {
        super.obowiazki();
    }

    @Override
    public void idzDoSzkoly() {
        super.idzDoSzkoly();
    }

    @Override
    public void trenuj() {
        super.trenuj();
    }
}
