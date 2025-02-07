package code;

import java.util.Scanner;

public class negative_positivenumber {
    public static void main(String[] args) {
        int nums;

        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number:");
        nums = sc.nextInt();

        if (nums>=0) {
            System.out.println("this number is positive :"+nums);
        }else{
            System.out.println("this number is negative number:"+nums);
        }
    }
}
