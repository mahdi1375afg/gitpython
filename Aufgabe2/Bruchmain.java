public class Bruchmain {
   //end commit
    public static Bruch sumtest(int loop) {
       
        Bruch sum = new Bruch(1,1);
         for (int i = 1; i < loop; i++) {
             if (i != 1) {
                 //Bruch f = new Bruch(i - 1);
                  sum = sum.add(new Bruch(1,i));
             }
         }
         return sum;
     }

     public static Bruch e (int n){

         Bruch fakul = new Bruch(1,1);
         for (int i =1; i <= n;i++){
           if(i == 2){
                fakul = fakul.add(fakul);
           }
            else if(i != 1){
                Bruch nenner = new Bruch(i-1);
                fakul = fakul.add(nenner);

            }
        }
         return fakul;
     }
    public static void main(String[] args) {

        Bruch x = new Bruch(1, 2); // x= 1/2
        Bruch y = new Bruch(2, 3); // y= 2/3

        //Bruch z = new Bruch(1,1);
        System.out.println("x: " + x + "\n");
        System.out.println("y: " + y + "\n");

        y.add(x); // 2/3 + 1/2 = 4/6 + 3/6
        System.out.println("y= " + y.get()); // y= 7/6
        System.out.println("sum =" + sumtest(3)); // loop = 3 ,result = 3/2
        System.out.println("fakul =" + e(8)); // n= 2 e=2/1
        //System.out.println("konstruktor test " + new Bruch(5));

    }
}
