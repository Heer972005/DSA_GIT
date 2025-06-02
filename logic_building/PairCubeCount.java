package logic_building;

// Java program to count pairs whose sum cubes is n

public class PairCubeCount{
    // method to count the pairs satisfying
    // a ^ 3 + b ^ 3 = N
    static int countPairs(int n) {
        int count = 0;
     
        // Check for each number 1 to cbrt(n)
        for (int i = 1; i <= Math.cbrt(n); i++) {
            // Store cube of a number
            int cb = i*i*i;
     
            // Subtract the cube from given n
            int diff = n - cb;
     
            // Check if the difference is also
            // a perfect cube
            int cbrtDiff = (int) Math.cbrt(diff);
     
            // If yes, then increment count
            if (cbrtDiff*cbrtDiff*cbrtDiff == diff)
                count++;
        }
        return count;
    }
    static int countPair(int n){
        int c=0;
        for(int a=1;a<=n;a++){
            for(int b=0;b<=n;b++){
                if((a*a*a)+(b*b*b)==n){
                c++;}
            }
        }
        return c;
    }
    public static void main(String args[])  {
 			int n = 9;
            System.out.println(countPairs(n));
            System.out.println(countPair(n));
    }
}