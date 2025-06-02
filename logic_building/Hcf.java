package logic_building;

public class Hcf {
    static int gdc(int a,int b){
        if(b==0)
        return a;
        return gdc(b,a%b);
    }
    public static void main(String[] args) {
        int a=98,b=56;
        System.out.println("GDC of "+a+" and "+b+" is "+gdc(a,b));
    }
}
