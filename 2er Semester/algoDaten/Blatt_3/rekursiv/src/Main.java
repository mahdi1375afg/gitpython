public class Main {
    public static int fact(int n){
        if (n <= 0) {
            return 1;
        } else {
            System.out.println(n);
            return n * fact(n - 1);
        }
    }
    public static void main(String[] args) {
        System.out.println("fact: " + fact(3));
    }
}
