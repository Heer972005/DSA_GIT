package logic_building;

public class KthElement {
    static int Kthele(int a,int b,int k){
        long res=(long)Math.pow(a,b);
        String st=String.valueOf(res);
        char ch=st.charAt(st.length()-k);
        return ch-'0';
    }
    public static void main(String[] args) {
        int a=5,b=2,k=2;
        System.out.println(Kthele(a, b, k));
    }
    
}