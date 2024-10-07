package hob;
public class WortImpl implements Wort {
    private String wort;

    // Konstruktor
    public WortImpl(String wort) {
        this.wort = wort;
    }

    @Override
    public char position(int k) {
        if (k < 1 || k > wort.length()) {
            throw new IndexOutOfBoundsException("Ungültiger Index: " + k);
        }
        return wort.charAt(k - 1);  // k = faengt von 1 zu zaehlen
    }

    @Override
    public int laenge() {
        return wort.length();
    }

    @Override
    public Wort concat(Wort w) {
        return new WortImpl(this.wort + ((WortImpl) w).wort);
    }

    @Override
    public int anzahl(char c) {
        int count = 0;
        for (int i = 0; i < wort.length(); i++) {
            if (wort.charAt(i) == c) {
                count++;
            }
        }
        return count;
    }

    @Override
    public Wort tausche(char c1, char c2) {
        return new WortImpl(wort.replace(c1, c2));
    }
    @Override
    public Wort teilwort(int start, int laenge) {
        if (start < 1 || start + laenge - 1 > wort.length()) {
            throw new IndexOutOfBoundsException("Ungültiger Bereich");
        }
        return new WortImpl(wort.substring(start - 1, start - 1 + laenge));
    }
    @Override
    public int istTeilwortVon(Wort w) {
        String wStr = this.wort;
        String teilwort = ((WortImpl) w).wort;

        // Suche das Teilwort im String wStr
        int index = wStr.indexOf(teilwort);

        // Wenn das Teilwort gefunden wird, gebe den 1-basierten Index zurück, sonst 0
        return index >= 0 ? index + 1 : 0;
    }



    @Override
    public Wort ersetze(Wort w1, Wort w2) {
        return new WortImpl(wort.replace(((WortImpl) w1).wort, ((WortImpl) w2).wort));
    }

    // equals() Methode, um die Vergleiche in den Tests zu unterstützen
    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        WortImpl wortImpl = (WortImpl) obj;
        return wort.equals(wortImpl.wort);
    }


}
