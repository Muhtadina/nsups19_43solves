/*
 * NSUPS19 Solution L: IQ Test 
 */

package com.mycompany.psl;
import java.util.Scanner;
public class PsL {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        if (n < 3 || n > 100) {
            System.exit(0);
        }

        int[] arr = new int[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
            if (arr[i] <= 100) {
                if (arr[i] % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            } else {
                System.exit(0);
            }
        }

        if (even == 1) {
            for (int i = 0; i < n; i++) {
                if (arr[i] % 2 == 0) {
                    System.out.println(i + 1);
                }
            }
        } else if (odd == 1) {
            for (int i = 0; i < n; i++) {
                if (arr[i] % 2 != 0) {
                    System.out.println(i + 1);
                }
            }
        }

        scanner.close();
    }
}
