/*
 * NSUPS19 Solution AU: Fraction
 */
package com.mycompany.psau;
import java.util.*;
public class PsAU {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int a, b;
        if(n%2==0)
        {
        a = (n/2) -1;
        b = (n/2) +1;
        System.out.println(a + " " + b);
        }
        else if(n%2!=0)
        {
        a = n/2;
        b = (n/2) + (n%2);
        System.out.println(a + " " + b);
        }
        
    }
}
