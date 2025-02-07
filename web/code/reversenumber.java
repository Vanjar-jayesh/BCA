package code;

public class reversenumber {
    public static void main(String[] args) {
        int nus = 123;
        int rev=0;

        while (nus != 0) {
            int digit = nus%10;
            rev = rev *10+digit;
            nus/=10;
        }

        System.out.println(rev);
    }
}
