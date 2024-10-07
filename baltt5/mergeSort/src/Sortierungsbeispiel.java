public class Sortierungsbeispiel {
    public static void main(String[] args) {
        Bruch[] brueche = {
                new Bruch(1, 2),
                new Bruch(2, 3),
                new Bruch(1, 3),
                new Bruch(3, 4)
        };
        Sortierung.mergesort(brueche);

        for (int i = 0; i < brueche.length; ++i) {
            System.out.print(brueche[i] + " ");
            System.out.println();
        }
        //Aufgabe 2
        String[] testArray = {"Banane", "Apfel", "Mango", "Zitrone", "Kirsche"};
        Sortierung.mergesort(testArray);

        for (int i = 0; i < testArray.length; ++i) {
            System.out.print(testArray[i] + " ");
            System.out.println();
        }
        //Aufgabe 1
        Comparable[] a = {15, 3, 8, 9, 20, 70, 4, 6};
        Sortierung.mergesort(a);
        System.out.print("a: ");
        for (int i = 0; i < a.length; ++i) {
            System.out.print(a[i] + " ");
            System.out.println();
        }
    }
}

