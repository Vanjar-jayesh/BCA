package code;

public class decimalTObinary {
    public static void main(String[] args) {
        int binary[] = new int[32];
        int i=0;

        int n=7;
        if (n==0) {
            System.out.println("0");
        }

        // while (n>0) {
        //     binary[i] = n%8;//2
        //     n =n/8;//2
        //     i++;
        // }

        while (n>0) {
            int remainder = n%16;
            if (remainder <10) {
                binary[i] = remainder+'0';

            }else{
                binary[i]=remainder-10+'A';
            }
            n = n/16;
            i++;
        }

        for(int j=i-1; j>=0; j--){
            System.out.print(binary[j]);
        }

    }
}
