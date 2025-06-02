package logic_building;
 class Closest_Num {
    static int closestNumber(int n,int m){
        int closest=0;
        int minDifference=Integer.MAX_VALUE;
        
        for(int i=n-Math.abs(m);i<=n+Math.abs(m);i++){
            if(i%m==0){
                int diff=Math.abs(n-i);
                if(diff<minDifference||(diff==minDifference&&Math.abs(i)>Math.abs(closest))){
                    closest=i;
                    minDifference=diff;
                }
            }
        }
        return closest;
    }
    static int closest_num(int n,int m){
        int q=n/m;
        int n1=q*m;
        int n2=(n*m)>0?m*(q+1):m*(q-1);
        if(n-n1<Math.abs(n-n2))
        return n1;
        return n2;
    }
    public static void main(String[] args) {
        int n=13,m=4;
        System.out.println(closestNumber(n,m));
        System.out.println("second algorithm:"+closest_num(n,m));
    }
}