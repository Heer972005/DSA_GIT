package leetcode;
public class LongestCommonPrefix {
    public static void main(String[] args) {
        LongestCommonPrefix ob=new LongestCommonPrefix();
        String[] in={"flower","flow","flight"};
        System.out.println("Longest Common Prefix:"+ob.longestCommonprefix(in));
    }

    String longestCommonprefix(String st[]) {
        //System.out.println(st.length);
        if (st.length == 0)
            return "";
        String prefix = st[0];
        System.out.println(prefix.length()-1);
        for (int i = 1; i < st.length; i++) {
            while (!st[i].startsWith(prefix)) {
                prefix = prefix.substring(0, prefix.length() - 1);
                if (prefix.isEmpty())
                    return "";
            }
        }
        return prefix;
    }
}