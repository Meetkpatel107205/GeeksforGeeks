
package Java;

import java.util.Scanner;

public class Calculator {

    // Function to perform operations
    public static void utility(int a, int b, int opr) {
        if (opr == 1) {
            System.out.print("" + (a + b));
        } else if (opr == 2) {
            System.out.print("" + (a - b));
        } else if (opr == 3) {
            System.out.print("" + (a * b));
        } else {
            System.out.print("Invalid Input");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // take input
        int a = sc.nextInt();
        int b = sc.nextInt();
        int opr = sc.nextInt();

        // call utility
        utility(a, b, opr);

        sc.close();
    }
}