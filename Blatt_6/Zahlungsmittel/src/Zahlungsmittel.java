
public abstract class Zahlungsmittel implements Comparable<Zahlungsmittel>{
  private String waehrung;
  private double wert;


  protected Zahlungsmittel(String waehrung, double wert) {
	  this.waehrung = waehrung;
      this.wert = wert;
  }
  public String getWaehrung() {return waehrung;}
  public double getWert() {return wert;}

  @Override
  public int compareTo(Zahlungsmittel other) {

    return Double.compare(this.wert,other.wert);
  }


  public abstract boolean wertIstGueltig();

  public String toString() {
    return (wert + " " + waehrung);
  }
}
