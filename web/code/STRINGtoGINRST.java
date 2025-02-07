package code;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class STRINGtoGINRST {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the String:");
        String inpui = sc.nextLine();

        char[] ch = inpui.toCharArray();
        Arrays.sort(ch);

        String sort = new String(ch);
        System.out.println(sort);
    }
}
