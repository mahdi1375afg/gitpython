public class Bruch {
    private int z;
    private int n;

    // koustruktor
    public Bruch(int up, int down) {
        if (down == 0) {
            System.out.println("nenner darf nicht 0 sein");
        } else {
            this.z = up;
            this.n = down;
            reduce();
            // toString();
        }
    }
    public Bruch (int d){
        this.z = 1;
        int f = 1;
        for(int i= 1;i <= d;i++){
           f *= i ;
        }
        this.n = f;
    }
    public Bruch() {
    }

    // bruch darstellung für print
    public String toString() {
        return z + "/" + n;
    }

    // plus , minus , mal, div
    public Bruch add(Bruch x) {

        z = (z * x.n) + (x.z * n);
        n = n * x.n;
        return new Bruch(z, n);
        // s = b + x;
    }

    public Bruch minus(Bruch x) {
        z = (z * x.n) - (x.z * n);
        n = n * x.n;
        return new Bruch(z, n);
    }

    public Bruch mal(Bruch x) {
        z = this.z * x.z;
        n = this.n * x.n;
        return new Bruch(z, n);
    }

    public Bruch div(Bruch x) {
        z = this.z * x.n;
        z = this.n * x.z;
        return new Bruch(z, n);
    }

    // Aufgabe2
    public static Bruch sumtest() {
       Bruch sum = new Bruch();
        for (int i = 1; i < 3; i++) {
            if (i != 1) {
               // Bruch f = new Bruch(i - 1);
                 sum = sum.add(new Bruch(1,i));
            }
        }
        return sum;

    }

    public Bruch get() {

        return new Bruch(z, n);
    }

    private int ggt() { // ggT iterativ
        int a = Math.abs(z); // falls Zähler negativ
        int b = n;

        while (a != 0 && b != 0) {
            if (a > b) {
                a = a % b;
            } else {
                b = b % a;
            }
        }
        return ((b == 0) ? a : b);
    }

    private void reduce() {
        if (z != 0) {
            int ggt = ggt();
            z /= ggt;
            n /= ggt;
        } else {
            n = 1;
        }
    }

 
}