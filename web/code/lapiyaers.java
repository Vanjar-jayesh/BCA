package code;

import java.util.Scanner;

public class lapiyaers {
    public static void main(String[] args) {
      

            int year;

            Scanner sc = new Scanner(System.in);

            year = sc.nextInt();

            if ((year %4==0 && year%100 != 0) ||(year%400 == 0)) {
                System.out.println("is a lesp year");
            }else{
                    System.out.println("is not a ;eap year.");
            }
        
    }
}
