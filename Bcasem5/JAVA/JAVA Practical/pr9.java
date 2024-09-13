<<<<<<< HEAD
package practicaljava;

import java.net.Socket;
import java.util.Scanner;

public class pr9 {
    /**
     * @param args
     */
    public static void main(String[] args) {
        int m;

        System.out.println("enter the number :");
        Scanner sc = new Scanner(System.in);
        m  =sc.nextInt();

        boolean isprime = true;

        for (int i = 2; i <=m/2; i++) {
            
            if (m%i==0) {
                
                isprime = false;
                break;


            }
        }
        if (isprime) {
            System.out.println("this number is prime");
        }else{
            System.out.println("this number is not prime");
        }
    }
    
}
=======
package practicaljava;

import java.net.Socket;
import java.util.Scanner;

public class pr9 {
    /**
     * @param args
     */
    public static void main(String[] args) {
        int m;

        System.out.println("enter the number :");
        Scanner sc = new Scanner(System.in);
        m  =sc.nextInt();

        boolean isprime = true;

        for (int i = 2; i <=m/2; i++) {
            
            if (m%i==0) {
                
                isprime = false;
                break;


            }
        }
        if (isprime) {
            System.out.println("this number is prime");
        }else{
            System.out.println("this number is not prime");
        }
    }
    
}
>>>>>>> d57630d95a0eb09d765f2fa6ae036adaf297c42c
