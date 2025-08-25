
package Java;

import java.util.Scanner;

public class Print_Without_Newline {

    // Method to read two lines and print them without newline
    public void utility(Scanner sc) {
        String a = sc.nextLine();
        String b = sc.nextLine();
        
        System.out.print(a + " " + b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Print_Without_Newline obj = new Print_Without_Newline();
        
        obj.utility(sc); // Call the method
    }
}