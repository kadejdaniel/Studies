public class Dorosly extends Czlowiek{
    public Dorosly(String imie, int wiek) {
        super(imie, wiek);
    }

    @Override
    public void jedz() {

    }

    @Override
    public void pij() {

    }

    @Override
    public void ileLat() {
        super.ileLat();
    }

    @Override
    public void cechy() {
        super.cechy();
    }

    public void zabawa(){
        System.out.println(imie + "idz do kina na horror bo masz " + wiek + " " +"lat ");
    };
    public void obowiazki(){
        System.out.println(imie + "oplac rachunki");
    };


}
