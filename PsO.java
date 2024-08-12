/*
 * PS19 Solution O
 */

package com.mycompany.pso;
import java.util.Scanner;
public class PsO {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] toast = new int[8];
        for(int i=0; i<8; i++){
            toast[i] = sc.nextInt();
        }
        
        for(int i=0; i<8; i++){
            if(toast[i]<1 && toast[i]>1000)
                System.exit(0);
        }
        int toast1 = toast[1]*toast[2] /  toast[6];
        int toast2 = toast[3]*toast[4];
        int toast3 = toast[5]/toast[7];
        
        int output = min(toast1, toast2, toast3)/toast[0];
        System.out.print(output);
    }
    public static int min(int a, int b, int c){
    if(a<=b && a<=c)
        return a;
    else if(b<=a && b<=c)
        return b;
    else
        return c;
    }
}
