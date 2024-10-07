public class test {
    public static void main(String[] args) {
        list l = new list();

        // Fügt Elemente zur Liste hinzu (8, 16, 24, 32, 40, 48, 56, 64, 72, 80)
        for (int i = 1; i <= 10; ++i) {
            l.add(8 * i);
        }

        // Entfernt das Element an der Position 3 (Index-basiert, also das 4. Element)
        l.remove(3);

        // Gibt die Elemente in umgekehrter Reihenfolge aus
        for (int i = l.size() - 1; i >= 0; --i) {
            System.out.print(" " + l.get(i));
        }
        System.out.println();
    }
}
