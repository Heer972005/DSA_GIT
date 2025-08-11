package leetcode;
import java.util.Scanner;
public class MaxSumArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a[] = { 1, -1, 3, 4 };
        int maxsum = Integer.MIN_VALUE;
        for (int i = 0; i < a.length; i++) {
            for (int j = i+1; j < a.length; j++) {
                int sum = a[i] + a[j];
                if (maxsum < sum) {
                    maxsum = sum;
                }
            }
        }
        System.out.println(maxsum);
    }
}
