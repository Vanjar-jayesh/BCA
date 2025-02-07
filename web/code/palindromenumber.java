package code;

public class palindromenumber {
    public static void main(String[] args) {
        int nums = 121;
        int rev=0;

        while (nums != 0) {
            
            int digit = nums%10;
            rev = rev*10+digit;
            nums /=10;
        }

        if (nums==rev) {
            System.out.println("this number is palindromenumber:"+rev);
        }else{
            System.out.println("this number is not  palindromenumber:"+rev);
        }
    }
}
