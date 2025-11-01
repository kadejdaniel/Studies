public class Dziecko extends Czlowiek{
    public Dziecko(String imie,int wiek) {
        super(imie,wiek);
    }

    @Override
    public void jedz() {

    }

    @Override
    public void pij() {

    }

    public void zabawa(){
        System.out.println("zabawa klockami LEGO");
    };
    public void obowiazki(){
        System.out.println("sprzątanie pokoju");
    };

    public void idzDoSzkoly(){
        System.out.println(imie + " " +"idz do szkoly");
    }
    public void trenuj(){
        System.out.println(imie + "idz wyciskaj 80x10");
    }


}
