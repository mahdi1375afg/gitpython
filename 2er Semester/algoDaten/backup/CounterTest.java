public class CounterTest{


public static void main(String[] args){

Counter x = new Counter();

for (int i = 0 ; x.get() <= 20;i++){

	x.increment();
	x.increment();
	x.increment();

	x.decrement();
	x.decrement();
}
	System.out.println("Zählerstand ist " + x.get());
}
}
// Aufgabe3
//C:\2er Semester\Algo.daten\aufgabe1>javac CounterTest.java

//C:\2er Semester\Algo.daten\aufgabe1>java CounterTest
//Zählerstand ist 21