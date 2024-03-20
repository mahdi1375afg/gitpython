public class Counter {
private int x; // Zählerstand
private int y = -999;
public Counter() { // Konstruktor
x = 0;
}
public void increment() { // Hochzählen
x++;
}
public int get() { // Auslesen
return x;
}
public void reset() { // Zurücksetzen
x = 0;
}


public void decrement(){
if( x > 0){
x--;
}
}

public void save(){
	int y = get();
}

public void restore(){
	if (y != -999){
	x = y;
	}
	else{
		System.out.println("Fehlermeldung : Sie müssen bevor Benutzung von Restore ,save benutzen");
	}
}
}
