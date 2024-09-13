//Write a java Progarm find the area of Circle
package practicaljava;

import java.util.Scanner;

public class pr1 {
    public static void main(String[] args) {
         int a ;
         double pi  =Math.PI;

         System.out.println("enter the number of area of circle:");
         Scanner sc = new Scanner(System.in);
         a = sc.nextInt();

         double area = pi * a *a;

         System.out.println("area of circle : "+area);
        
    
      //  int [][]arr = {{1,2},{3,4}};

       // System.out.println(arr[0][0]);
      //  System.out.println(arr[1][1]);

    }
}

OUTPUT:
enter the number of area of circle: 5

area of circle :78.53981633974483
