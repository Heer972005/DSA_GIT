package logic_building;
import java.util.HashMap;
public class FractionReccu {
    static String calFrac(int a,int b){
        if(a==0)
        return "0";

    String res=(a<0)^(b<0)?"-":"";
    a=Math.abs(a);
    b=Math.abs(b);

    res+=Integer.toString(a/b);
    int rem=a%b;

    if(rem==0)
    return res;

    res+=".";
    HashMap<Integer,Integer>mp=new HashMap<>();
    while(rem>0){
        if(mp.containsKey(rem)){
            res=res.substring(0,mp.get(rem))+"("+res.substring(mp.get(rem))+")";
            break;
        }
        mp.put(rem,res.length());
        rem=rem*10;
        res+=Integer.toString(rem/b);
        rem=rem%b;
    }
    return res;
    }
    public static void main(String[] args) {
        int a=50,b=22;
        System.out.println(calFrac(a,b));
    }
}
