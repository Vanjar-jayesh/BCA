// Write a java program that implements the use of continue statement.
package practicaljava;

import java.util.Scanner;

public class pr10 {
    public static void main(String[] args) {
        int n ,x;

        System.out.println("enter the number:");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        
        System.out.println("enter the number:");
        Scanner sc2 = new Scanner(System.in);
        x= sc2.nextInt();


        int sum = n + x;

        for(int i = 0; i<=x+n; i++){

            if (sum != i) {
                continue;
                // this is use of the continue Statemant:
                
                
            }
            else{
                System.out.println("not the sema of the value is  n and x");
            }
        }


    }
}

OUTPUT:
enter the number:
2
enter the number:
1
not the sema of the value is  n and x
