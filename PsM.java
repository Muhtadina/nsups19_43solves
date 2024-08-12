//NSUPS19 Solution M: Hajj-e-Akbar

package com.mycompany.psm;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
public class PsM {
    public static void main(String[] args) {
        Queue<String> hajj = new LinkedList<>();
        Scanner scanner = new Scanner(System.in);
        String H = " ";
        
        while (!H.equals("*")) {
            H = scanner.nextLine();
            hajj.add(H);
        }

        int i = 1;
        while (!hajj.isEmpty()) {
            String hh = hajj.poll().toUpperCase();

            if (hh.equals("HAJJ"))
                System.out.println("Case " + i + ": Hajj-e-Akbar");
            else if (hh.equals("UMRAH"))
                System.out.println("Case " + i + ": Hajj-e-Asghar");
            else if (hh.equals("*"))
                System.exit(0);

            i++;
        }
    }
}
