package queue;
import java.util.LinkedList;
public class DequeOperations {
    private LinkedList<Integer>deque;
    public DequeOperations(){
        deque=new LinkedList<>();
    }
    public boolean isEmpty(){
        return deque.isEmpty();
    }
    public int getSize(){
        return deque.size();
    }
    public void insertFront(int dt){
        deque.addFirst(dt);
    }
    public void insertRear(int dt){
        deque.addLast(dt);
    }
    public void deleteFront(){
        if(isEmpty())
        System.out.println("Underflow");
        else
        deque.removeFirst();
    }
    public void deleteRear(){
        if(isEmpty())
        System.out.println("Underflow");
        else
        deque.removeLast();
    }
    public int getFront(){
        return isEmpty()?-1:deque.getFirst();
    }
    public int getRear(){
        return isEmpty()?-1:deque.getLast();
    }
    public void clear(){
        deque.clear();
    }
    public static void main(String[] args) {
        DequeOperations dq=new DequeOperations();
        dq.insertRear(5);
        dq.insertRear(10);
        System.out.println("Rear: "+dq.getRear());
        dq.deleteRear();
        System.out.println("New Rear: "+dq.getRear());

        dq.insertFront(15);
        System.out.println("Front: "+dq.getFront());
        System.out.println("Size : "+dq.getSize());

        dq.deleteFront();
        System.out.println("New Front: "+dq.getFront());
    }
}
