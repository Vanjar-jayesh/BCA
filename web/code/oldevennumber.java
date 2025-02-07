package code;

import java.util.Scanner;

public class oldevennumber {

    public static void main(String[] args) {
        int number;

        System.out.println("enter the number:");
        Scanner sc = new Scanner(System.in);
        number = sc.nextInt();

        for(int i=0; i<=number; i++){
            if (i%2==0) {
                
                System.out.println("this evennumber:"+i);
                System.out.println();
            }
            else{
                System.out.println("this oda number:"+i);
            }
        }
    }
}