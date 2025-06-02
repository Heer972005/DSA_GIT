package logic_building;

public class PascalTrian {
    static void printPascal(int n){
        for(int i=1;i<=n;i++){
            int c=1;
            for(int j=1;j<=i;j++){
                System.out.print(" "+c+" ");
                c=c*(i-j)/j;
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int n=5;
        printPascal(n);
    }
}
