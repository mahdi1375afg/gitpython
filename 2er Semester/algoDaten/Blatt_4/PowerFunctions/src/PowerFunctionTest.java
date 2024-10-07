public class PowerFunctionTest extends PowerFunction {

    public static void main(String[]args){
       PowerFunction test = new PowerFunction();
        double sumN = 0;
        double resultP=0;
        double resultFP=0;

        for(int i = 0;i < 10001;i++){
          double x = Math.random();
          int n = (int)(1000*x);
          sumN += n;
          power(x,n);
          resultP += getCountPower();

          //System.out.println("P"+resultP);
            fastPower(x,n);
            resultFP += getCountFastPower();;
            resetCounters();
          //System.out.println(getCountFastPower());
        }

        System.out.println("Anzahl * Power: " + resultP);
        System.out.println( "Anzahl * FastPower: " + resultFP);
        double avgN =sumN/10000;
        double avgXP = resultP/10000;
        double avgXFP = resultFP/10000;
        System.out.println("avg n: " + avgN );
        System.out.println("avg x Power:" + avgXP);
        System.out.println("avg x FastPower: " + avgXFP);

    }
}
