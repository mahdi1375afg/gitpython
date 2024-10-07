public class RestirctedCounterTest {
    public static void main(String[] args) {
        RestrictedCounter c = new RestrictedCounter(15);
         for (int i = 0; i < 20; ++i) {
            c.increment();
            System.out.println(i);
            System.out.println("c=" + c.get() + " (free capacity=" +
                    c.freeCapacity() + ")");
        }

        for (int i = 0; i < 20; ++i) {
            c.decrement();
            System.out.println("c=" + c.get() + " (free capacity=" +
                    c.freeCapacity() + ")");
        
                } 
        int i = 0;
    while(i < 5){
        c.increment();
        i++;
    }
    System.out.println(c.get());
    }
}
