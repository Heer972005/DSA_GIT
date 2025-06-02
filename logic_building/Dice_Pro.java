package logic_building;
public class Dice_Pro {
    static int oppoFace(int n){
        int ans=7-n;
        return ans;
    }
    public static void main(String[] args) {
        int n=2;
        System.out.println(oppoFace(n));
    }
}
