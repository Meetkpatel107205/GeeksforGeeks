
package Java;

import java.util.Scanner;

public class nextLine_and_next {

    // Function to demonstrate nextInt() + nextLine()
    static void getInput() {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); // Taking the number of testcases
        sc.nextLine(); // consume leftover newline after integer

        while (t-- > 0) {
            int a = sc.nextInt();
            sc.nextLine(); // consume leftover newline

            String s = sc.nextLine(); // read full line (can contain spaces)

            System.out.println(a);
            System.out.println(s);
        }

        sc.close();
    }

    public static void main(String[] args) {
        getInput();
    }
}
