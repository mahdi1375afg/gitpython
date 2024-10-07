class MyList {
    private Node head;
    private Node tail;
    private int size;

    // Konstruktor: erzeugt eine leere Liste
    public MyList() {
        this.head = null;
        this.tail = null;
        this.size = 0;
    }
    private class Node {
        Integer data;
        Node next;
        Node(Integer element){
            this.data = element;
            this.next = null;
        }
    }

    // Fügt ein neues Element am Ende der Liste hinzu (O(1))
    public void add(Integer x) {
        Node newNode = new Node(x);
        if (tail == null) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
        size++;
    }

    // Liefert die Länge der Liste
    public int size() {
        return size;
    }

    // Liefert das Listenelement an der Position index
    public Integer get(int index) {
        if (index < 0 || index >= size) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size: " + size);
        }
        Node current = head;
        for (int i = 0; i < index; i++) {
            current = current.next;
        }
        return current.data;
    }

    // Liefert das Listenelement an der Position index und entfernt es aus der Liste
    public Integer remove(int index) {
        if (index < 0 || index >= size) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size: " + size);
        }
        Node current = head;
        if (index == 0) {
            Integer data = head.data;
            head = head.next;
            if (head == null) {
                tail = null;
            }
            size--;
            return data;
        } else {
            Node prev = null;
            for (int i = 0; i < index; i++) {
                prev = current;
                current = current.next;
            }
            prev.next = current.next;
            if (current.next == null) {
                tail = prev;
            }
            size--;
            return current.data;
        }
    }

    // Methode zum Anzeigen der Liste (nur zu Demonstrationszwecken)
    /*public void display() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }*/

    public static void main(String[] args) {
        MyList list = new MyList();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        //list.display(); // Ausgabe: 1 -> 2 -> 3 -> 4 -> null

        System.out.println("Element at index 2: " + list.get(2)); // Ausgabe: 3
        System.out.println("Removed element at index 1: " + list.remove(1)); // Ausgabe: 2
        ///list.display(); // Ausgabe: 1 -> 3 -> 4 -> null

        System.out.println("Size of the list: " + list.size()); // Ausgabe: 3
    }
}
