package leetcode;
import java.util.Scanner;

public class increamentArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("enter the size");
        int size = s.nextInt();
        int arr[] = new int[size];
        int number=0;

        System.out.println("enter the elements:");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = s.nextInt();
        }
        
        for (int i = 0; i < arr.length; i++) {
            number = number * 10 + arr[i];
        }
        System.out.println(number);
        System.out.println(++number);
    }    
}
