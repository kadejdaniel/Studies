public abstract class Czlowiek {
    protected String imie;
    protected int wiek;

    public Czlowiek(String imie, int wiek) {
        this.imie = imie;
        this.wiek = wiek;
    }
    // zapowiedz metod abstrakcyjnych, a w klasie dziedziczacej zamienione na zwykla metode
    // z implementacja

    // ponizsze metody oznaczaja ze kazdy czlowiek czyli osoba ktora dziedziczy po
    // klasie abstrakcyjnej czlowiek musi miec metody takie jak:
    // jedz, pij, obowiazki, zabawa
    public abstract void obowiazki();
    public abstract void zabawa();

    public abstract void jedz();
    public abstract void pij();

    public void ileLat(){

    };
    public void cechy(){

    };


}
