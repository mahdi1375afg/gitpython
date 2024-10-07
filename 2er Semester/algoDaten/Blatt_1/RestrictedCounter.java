public class RestrictedCounter extends Counter {
	private int x; // Zählerstand
	private int y = -999;
	private int size;

	public int get(){
		return x;
	}

	public RestrictedCounter(int capacity) {
		size = capacity;
		x = 0;
	}


	public void increment() { // Hochzählen
		if (x >= size) {
			System.out.println("Sie haben max Kapazität überschritet");
		} else {
			x++;
		}
	}

	public int freeCapacity() {
		int free = size - x;
		// System.out.println("es gibt noch " + free + "plätze");
		return free;
	}

}
