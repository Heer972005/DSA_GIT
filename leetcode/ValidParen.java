package leetcode;

public class ValidParen {
    public static void main(String[] args) {
        ValidParen ob = new ValidParen();
        System.out.println(ob.isValid("([)]"));
        System.out.println(ob.isValid("({})"));
        System.out.println(ob.isValid("()}"));
    }

    boolean isValid(String s) {
        if (s.length()%2==1)
            return false;
        else {
            while (s.contains("()") || s.contains("[]") || s.contains("{}")) {
                s = s.replace("()", "")
                        .replace("[]", "")
                .replace("{}","");
            }
        }
        return s.isEmpty();
    }
}
