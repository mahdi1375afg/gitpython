public class list <E> {

    private node head;
    private node tail;
    private int size ;


    public list(){
        this.tail = null;
        this.head = null;
        this.size = 0;
    }
    private class node {
        E element;
        node next;
        node(E element){
            this.element = element;
            this.next = null;
        }
    }
    public void add(E x){
        node newnode = new node(x);
        if(tail == null) {
            tail = newnode;
            head = newnode;
        }
        else{
            tail.next = newnode;
            tail = newnode;
        }
        size++;
    }
    public int size(){
    return size;
    }

    public E get(int index){
        if (index < 0 || index >= size){
            throw new IndexOutOfBoundsException("index: " + index + "Size: "+ size);
        }
            node current =  head;
            for(int i =0;i < index; i++){
                current = current.next;
            }
                return current.element;
    }

    public E remove(int index){
        if (index <= 0 || index >= size){
            throw new IndexOutOfBoundsException("index: " + index + "Size: "+ size);
        }
        node current = head;
        if (index == 0){
            E data = head.element;
            head = head.next;
            if (head == null){
                tail = null;
            }
            size--;
            return data;
        }
        else{ node prev = null;
            for(int i=0; i < index;i++) {
                prev = current;
                current = current.next;
            }
                prev.next = current.next;

            if (current.next == null){
                tail = prev;
            }
            size--;
            return current.element;
        }

    }
    public static void main(String[] args) {
        list list = new list();
        Bruch bruch = new Bruch(1,2);
        Bruch bruch1= new Bruch(2,2);
        list.add(bruch);
        list.add(bruch1);
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);

        System.out.println("Element at index 2: " + list.get(2)); // Ausgabe: 3
        System.out.println("Removed element at index 1: " + list.remove(1)); // Ausgabe: 2
        System.out.println("Size of the list: " + list.size()); // Ausgabe: 3
    }
}