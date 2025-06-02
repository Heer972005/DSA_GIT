package tree;

public class BinaryTree {
    public static void main(String[] args) {
        Node firstN=new Node(2);
        Node secondN= new Node(3);
        Node thirdN=new Node(4);
        Node fourthN=new Node(5);

        firstN.left=secondN;
        firstN.right=thirdN;
        secondN.left=fourthN;
        System.out.println(firstN);
        System.out.println(secondN);
        System.out.println(thirdN);
        System.out.println(fourthN);
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