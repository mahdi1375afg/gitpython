
public class PowerFunction extends Counter {
    private static int countPower = 0;
    private static int countFastPower = 0;

    PowerFunction() {
    }


    public static double power(double x, int n) {

        Counter ZeahlerP = new Counter();
        double result = 1;
        for (int i = 0; i < n; i++) {
            result = result * x;
            ZeahlerP.increment();
            countPower = ZeahlerP.get();
        }
        return result;
    }
    public static double fastPower(double x,int n){
        if (n == 0) {
            return 1;
        }
        Counter ZeahlerFP = new Counter();
        double result = 1;
        while (n > 0) {

            if (n % 2 == 1) {
                result *= x;
                ZeahlerFP.increment();
            }
            x *= x; // gerade n
            ZeahlerFP.increment();
            countFastPower = ZeahlerFP.get();
            n /= 2;
        }
        return result;
    }
        public static int getCountPower(){
            return countPower;
        }
        public static int getCountFastPower(){
             return countFastPower;
        }
        public static void resetCounters(){
            countPower = 0;
            countFastPower = 0;
        }



    public static void main(String[] args) {
        double result = fastPower(2,11);
        double result1 = power(2,11);

        System.out.println(result);
        System.out.println("Power: " + getCountPower()+ "\nFastPower:" + getCountFastPower());
    }

}