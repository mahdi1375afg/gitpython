public class Sortierung {

    public static void mergesort(Comparable[] x){

        if (x.length <= 1) {
            return;//mit jedem return eine stack auf Stapeln legen
        }

        int h = x.length / 2;


        Comparable[] left = new Comparable[h];
        Comparable[] right = new Comparable[x.length - h];

        //kopie Rechts
        for (int i = 0; i < h; i++) {
            left[i] = x[i];
        }

        //kopie links
        for (int i = h; i < x.length; i++) {
            right[i - h] = x[i];
        }

        //rekursiv Aufruf
        mergesort(left);
        mergesort(right);

        //Sortieren
        merge(x, left, right);
    }

    public static void merge(Comparable[] x, Comparable[] left, Comparable[] right) {
        int i = 0, j = 0, k = 0;  //i =links, j= rechts, k=haupt array

        while (i < left.length && j < right.length) {
            if (left[i].compareTo(right[j]) < 0 ) {
                x[k++] = left[i++];
            } else {
                x[k++] = right[j++];
            }
        }

        //Rest kopie
        while (i < left.length) {
            x[k++] = left[i++];
        }


        while (j < right.length) {
            x[k++] = right[j++];
        }
    }
}
