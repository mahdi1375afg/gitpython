public class RestrictedCounter extends Counter {
	private int x; // Zählerstand
	private int y = -999;
	private int size;

	public RestrictedCounter(int capacity) {
		size = capacity;
		x = 0;
	}

	public RestrictedCounter() { // Konstruktor
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

	public static void main(String[] args) {
		RestrictedCounter c = new RestrictedCounter(15);
		for (int i = 0; i < 20; ++i) {
			c.increment();
			System.out.println("c=" + c.get() + " (free capacity=" +
					c.freeCapacity() + ")");
		}
		for (int i = 0; i < 20; ++i) {
			c.decrement();
			System.out.println("c=" + c.get() + " (free capacity=" +
					c.freeCapacity() + ")");
		}
	}

}
