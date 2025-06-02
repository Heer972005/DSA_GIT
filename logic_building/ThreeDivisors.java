package logic_building;
public class ThreeDivisors{
    static void numWith3Divisors(int n){
        System.out.println("Numbers with 3 divisors:");
        for(int i=2;i*i<=n;i++){
            if(isPrime(i)){
                System.out.print(i*i+" ");
            }
        }
    }
    static boolean isPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    public static void main(String[] args) {
        int n=122;
        numWith3Divisors(n);
    }
}