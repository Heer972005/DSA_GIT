package logic_building;
public class Check_pow {
    static boolean isPower(int x,int y){
        double res1=Math.log(y)/Math.log(x);
        return res1==Math.floor(res1);
    }
    public static void main(String[] args) {
        System.out.println(isPower(2,125));
    }
}
