package logic_building;
import java.util.ArrayList;
import java.util.HashMap;
public class FizzBuzz {
    static ArrayList<String>fizzBuzz(int n){
        ArrayList<String>res=new ArrayList<>();
        HashMap<Integer, String>mp=new HashMap<>();
        mp.put(3,"Fizz");
        mp.put(5,"Buzz");
        int[]divisors={3,5};
        for(int i=1;i<=n;i++){
            StringBuilder s=new StringBuilder();
            for(int d:divisors){
                if(i%d==0){
                    s.append(mp.get(d));
                }
            }
            if(s.length()==0){
                s.append(i);
            }
            res.add(s.toString());
        }
        return res;
    }
    public static void main(String[] args) {
        int n=20;
        ArrayList<String>res=fizzBuzz(n);
        for(String s:res){
            System.out.println(s+" ");
        }
    }
}