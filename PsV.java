/*
 * NSUPS19 Solution V: Divide It
 */

package com.mycompany.psv;
import java.util.Scanner;
public class PsV {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        if(q<1 || q>1000){System.exit(0);}
        long [] n = new long[q];
        for(int i=0; i<q; i++){
            n[i] = sc.nextLong();
            int move = 0;
            if(n[i]==1)
                System.out.println(0);
            if(n[i]>1 && n[i]<=1000000000000000000L){
                while(n[i]>1){
                    if(n[i]%2 == 0){
                        n[i] = n[i]/2;
                        move++;
                    }
                    else if(n[i]%3 == 0){
                        n[i] = 2*n[i]/3;
                        move++;
                    }
                    else if(n[i]%5 == 0){
                        n[i] = 4*n[i]/5;
                        move++;
                    }
                    else if(n[i]%2 != 0 && n[i]%3 != 0 && n[i]%5 != 0){
                        System.out.println(-1);
                        break;
                    }
                }
                if(n[i] == 1)
                    System.out.println(move); 
            }
        }
    }
}
