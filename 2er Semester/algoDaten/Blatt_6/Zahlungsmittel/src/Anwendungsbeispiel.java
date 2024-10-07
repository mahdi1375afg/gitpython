public class Anwendungsbeispiel {

    public static void main(String[] args) {

        Zahlungsmittel geld[] = {new USD_Muenze(0.10), new USD_Schein(20),
                new SFR_Muenze(0.50), new USD_Muenze(0.50), new EUR_Schein(50),
                new USD_Schein(100), new USD_Muenze(0.25),
                new EUR_Muenze(0.01), new SFR_Schein(200), new USD_Schein(100),
                new EUR_Muenze(2), new EUR_Schein(5), new USD_Muenze(0.25),
                new SFR_Muenze(0.10), new USD_Muenze(0.50),
                new USD_Schein(100), new USD_Schein(100),
                new USD_Muenze(0.01), new SFR_Schein(20), new SFR_Muenze(0.50),
                new USD_Muenze(0.50), new EUR_Schein(50), new USD_Schein(5),
                new EUR_Muenze(0.50), new EUR_Muenze(0.01), new SFR_Schein(10),
                new SFR_Schein(20), new SFR_Muenze(0.50)};

        int Countgueltig = 0;
        double cEUR = 0;
        double cUSD = 0;
        double cSFR = 0;

        for (int i = 0; i < geld.length; i++) {
            if (geld[i].wertIstGueltig() != true) {
                Countgueltig++;
                System.out.println("Ungueltige Zahlungsmittel: " + geld[i].toString() + " " + "Aufzahler: " + Countgueltig);
            }
            if(geld[i].getWaehrung().contains("EUR")){
                        cEUR += geld[i].getWert();
                //System.out.println("Aufzahler Euro" + cEUR);
            }

            if(geld[i].getWaehrung().contains("USD")){
                cUSD += geld[i].getWert();
            }
            //System.out.println("Aufzahler USD" + cUSD);

            if(geld[i].getWaehrung().contains("SFR")){
                cSFR += geld[i].getWert();
            }
            //System.out.println("Aufzahler Euro" + cSFR);

            //System.out.println(geld[i].toString());
        }
        double GewichtCount = 0;
        double hoheCount = 0;
        for (int i = 0; i < geld.length; i++) {
            if(geld[i] instanceof Muenze){
                GewichtCount += ((Muenze) geld[i]).getGewicht();
                hoheCount += ((Muenze) geld[i]).getDicke()/10;
            }
        }
        double breiteCount = 0;
        double langeCount = 0;
        for (int i = 0; i < geld.length; i++) {
            if(geld[i] instanceof Schein){
                langeCount += ((Schein) geld[i]).getLaenge();
                breiteCount += ((Schein) geld[i]).getBreite();
            }
        }
        double Faelche = langeCount * breiteCount/100;
        System.out.println("Faelche von scheinen "+ Faelche + " cm^2");
        System.out.println("Stapelhoehe : " + hoheCount + " cm" );

        System.out.println("Gewicht : " + GewichtCount + " g");
        System.out.println("Aufzahler Euro: " + cSFR);
        System.out.println("Aufzahler USD: " + cUSD);
        System.out.println("Aufzahler Euro: " + cEUR);
        Sortierung.mergesort(geld);
        for (int i = 0; i < geld.length; ++i) {
            System.out.print("sortierte" + geld[i] + " ");
            System.out.println();
        }
    }

}
