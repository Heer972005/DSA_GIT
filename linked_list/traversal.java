package linked_list;
class Node{
    int data;
    Node next;
    Node(int new_dt){
        this.data=new_dt;
        this.next=null;
    }
}
public class traversal {
    static void traverse(Node head){
        while(head!=null){
            System.out.println(head.data+" ");
            head=head.next;
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Node head=new Node(10);
        head.next=new Node(20);
        head.next.next = new Node(30);
        head.next.next.next = new Node(40);
        traverse(head);
    }
}
