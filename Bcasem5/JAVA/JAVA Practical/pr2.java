// Write a java Progarm that will display factorial of given number.
package practicaljava;

import java.util.Scanner;

public class pr2 {
 public static void main(String[] args) {

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


}

OUTPUT:

enter the number of n : 5
    120

