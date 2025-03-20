

package code;

public class first100primenumber {
    public static void main(String[] args) {
        
        // int c=0,n=0,i=1,j=1;

        // while (n<100) {
        //     j=1;
        //     c =0;
        //     while (j<=i) {
        //         if (i%j==0) {
        //             c++;
        //             j++;
        //         }
                
        //     }
            
        // }
        
        // if (c==2) {
        //     System.out.println(i);
        //     n++;
        // }
        // i++;
        int count = 0, num = 2;
        
        System.out.println("First 100 prime numbers:");
        
        //boolean isPrime = true;
        while (count < 100) {
            if (isPrime(num)) {
                System.out.print(num + " ");
                count++;
            }
            num++;
        }

    }

    public static boolean isPrime(int n){
        if (n<2) {
            return false;
        }

        for(int i=2; i<n/2; i++){
            if (i%n==0) {
                return false;
            }
        }
        return true;
    }
}
