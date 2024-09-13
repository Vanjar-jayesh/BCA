// Write a java Progarm that will display factorial of given number.
package practicaljava;

import java.util.Scanner;

public class pr2 {
<<<<<<< HEAD
    public static void main(String[] args) {
=======
 public static void main(String[] args) {
>>>>>>> d57630d95a0eb09d765f2fa6ae036adaf297c42c
        int n ;
        int fact = 1;

        System.out.println("enter the number of n : ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        for(int i = n; i>=1; i--){
            fact =  fact* i;

        }

        System.out.println(fact);
        // System.out.println(fact);
    }
<<<<<<< HEAD
=======
    
>>>>>>> d57630d95a0eb09d765f2fa6ae036adaf297c42c
}
