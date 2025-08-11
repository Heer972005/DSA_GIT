package leetcode;

import java.util.Scanner;

public class insertMin {
    public static void main(String[] args) {
        String st = "I forget the things";
        String a[] = st.split(" ");
        for (int i = a.length- 1; i >= 0; i--) {
            System.out.print(a[i]+" ");
        }
    }
}
/*public class insertMin {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a[] = { -1, 0, 1, 3, 4 };
        System.out.println(insertmin(a));
    }

    static int insertmin(int a[]) {
        //o/p=2 
        int min = a[0];
        for (int i = 0; i < a.length; i++) {
            if (a[i] == min)
                min++;
            else if (a[i] < min) {
                min = a[i];
            } else
                return min;
        }
        return min;
    }
}*/