package queue;

public class operation {
    public static void main(String[] args) {
        Queue q=new Queue();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);

        q.dequeue();
        q.dequeue();

        q.enqueue(60);
        q.enqueue(40);
        q.enqueue(50);

        q.dequeue();
    }
}
class Node{
    int data;
    Node next;
    Node(int dt){
        data=dt;
        next=null;
    }
}
class Queue{
    private Node front;
    private Node rear;
    public Queue(){
        front=rear=null;
    }
    public boolean isEmpty(){
        return front ==null;
    }
    public void enqueue(int dt){
        Node new_node=new Node(dt);
        if(isEmpty()){
            front=rear=new_node;
            printQueue();
            return;
        }
        rear.next=new_node;
        rear=new_node;
        printQueue();
    }
    public void dequeue(){
        if(isEmpty()){
            return;
        }
        Node temp=front;
        front=front.next;
        if(front==null)
        rear=null;
        temp=null;
        printQueue();
    }
    public void printQueue(){
        if(isEmpty()){
            System.out.println("Qyeey is empty");
            return;
        }
        Node temp=front;
        System.out.println("Current Queue");
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
        System.out.println();
    }
}