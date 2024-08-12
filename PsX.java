/*
 * NSUPS19 Solution X: Professor GukiZ's Robot
 */
package com.mycompany.psx;
import java.util.*;
public class PsX {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] point = new int[2][2];
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                point[i][j] = sc.nextInt();
            }
        }
        if(point[0][0]>=-1000000000 && point[0][0]<=1000000000 && point[0][1]>=-1000000000 && point[0][1]<=1000000000){
            if(point[1][0]>=-1000000000 && point[1][0]<=1000000000 && point[1][1]>=-1000000000 && point[1][1]<=1000000000){
                int d1 = Sub(point[0][0], point[1][0]); 
                int d2 = Sub(point[0][1], point[1][1]);
                System.out.println(Max(d1,d2));
            }
        }
        else
            System.exit(0);
    }
    public static int Sub(int x, int y){
        if(x>y)
            return x-y;
        else if(x<y)
            return y-x;
        else
            return 0;
    }
    public static int Max(int a, int b){
        if(a>b)
            return a;
        else 
            return b;
    }
}
