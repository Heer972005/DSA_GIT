package logic_building;
public class DivisibleBy11{
    static boolean check(String st){
        int l=st.length();
        int oddsum=0,evensum=0;
        for(int i=0;i<l;i++){
            if(i%2==0)
                oddsum+=st.charAt(i)-'0';
            else
                evensum+=st.charAt(i)-'0';
        }
        return ((oddsum-evensum)%11==0);
    }
    public static void main(String[] args) {
        String st="76945";
        if(check(st))
        System.out.println("Yes");
        else
        System.out.println("No");
    }
}