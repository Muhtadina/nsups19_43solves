/*
 * NSUPS19 Solution T: Nearly Lucky Number
 */

package com.mycompany.pst;
import java.util.Scanner;
public class PsT {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Long n = sc.nextLong();
        
        if(n<1 || n>(1000000000000000000L))
            System.exit(0);
        
        int Lcount = 0;
        while(n!=0){
            long d = n%10;
            if(d==4 || d==7)
                Lcount++; 
            n /= 10;
        }
        if(Lcount==4 || Lcount==7)
            System.out.print("YES");
        else
            System.out.print("NO");
    }
}
