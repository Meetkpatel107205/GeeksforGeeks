
package Java;

import java.util.Scanner;

public class Swap_The_Numbers {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // take two numbers from user
        int a = sc.nextInt();
        int b = sc.nextInt();

        // swap without using third variable
        b = a + b;
        a = b - a;
        b = b - a;

        // print swapped values
        System.out.println(a + " " + b);

        sc.close();
    }
}
