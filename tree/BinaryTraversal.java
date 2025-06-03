package tree;
import java.util.LinkedList;
import java.util.Queue;
public class BinaryTraversal {
    public static void main(String[] args) {
        Node root=new Node(2);
        root.left=new Node(3);
        root.right=new Node(4);
        root.left.left=new Node(5);

        System.out.print("In-order DFS: ");
        inOrder(root);
        System.out.print("\nPre-order DFS: ");
        preOrder(root);
        System.out.print("\nPost-order DFS: ");
        postOrder(root);
        System.out.print("\nLevel order: ");
        BFS(root);
    }
    static void inOrder(Node node){
        if(node==null)
        return;
        inOrder(node.left);
        System.out.print(node.dt);
        inOrder(node.right);
    }
    static void preOrder(Node node){
        if(node==null)
        return;
        System.out.println(node.dt+" ");
        preOrder(node.left);
        preOrder(node.right);
    }
    static void postOrder(Node node){
        if(node==null)
        return;
        postOrder(node.left);
        postOrder(node.right);
        System.out.println(node.dt+" ");
    }
    static void BFS(Node root){
        if(root==null)return;
        Queue<Node>queue=new LinkedList<>();
        queue.add(root);
        while(!queue.isEmpty()){
            Node node=queue.poll();
            System.out.println(node.dt+" ");
            if(node.left!=null)
            queue.add(node.left);
            if(node.right!=null)
            queue.add(node.right);
        }
    }
}

class Node{
    int dt;
    Node left,right;
    Node(int d){
        dt=d;
        left=null;
        right=null;
    }
}
